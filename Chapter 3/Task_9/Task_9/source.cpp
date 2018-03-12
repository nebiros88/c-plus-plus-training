#include "../../../std_lib_facilities.h"
int main()
{
	string a;
	cout << "Enter  any number from 0 to 4  in word and press 'Enter'\n";
	cin >> a;
	string result = "I dont know this number";
	if (a == "null") {
		result = "0";
	}
	if (a == "one") {
		result = "1";
	}
	if (a == "two") {
		result = "2";
	}
	if (a == "three") {
		result = "3";
	}
	if (a == "four") {
		result = "4";
	}
	cout << result;
	keep_window_open();

}