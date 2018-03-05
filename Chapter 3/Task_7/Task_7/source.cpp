#include "../../../std_lib_facilities.h"
int main()
{
	string first;
	string second;
	string third;
	cout << "Please type three any names and press 'Enter:\n";
	cin >> first >> second >> third;
	string temp = first;
	if (first > second) {
		first = second;
		second = temp;
	}
	if (second > third) {
		temp = second;
		second = third;
		third = temp;
	}
	if (first > second) {
		temp = second;
		second = first;
		first = temp;
	}
	cout << first << ", " << second << ", " << third << ".\n";
	keep_window_open();
}