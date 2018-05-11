#include "../../../../std_lib_facilities.h"
int main()
{
	string b = " ";
	vector<string> a = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	vector<string> a1 = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };
	cout << "Please make any number from 0 to 9  and press 'Enter'/\n";
	while (cin >> b) {
		for (int i = 0; i < a.size(); ++i) {
			if (a[i] == b)
				cout << a1[i];
		}
		for (int i = 0; i < a1.size(); ++i) {
			if (a1[i] == b)
				cout << a[i];
		}
	}
	keep_window_open();
}