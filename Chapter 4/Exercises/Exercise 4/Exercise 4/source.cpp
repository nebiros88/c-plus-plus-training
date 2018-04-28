#include "../../../../std_lib_facilities.h"
int main() {
	int n0 = 0;
	int n1 = 100;
	string answer;
	int n = 0;
	int i = 0;
	int d = (n0 + n1) / 2 ;
	cout << "Please, make a number in case between 0 and 100. Is your number less than " << d << "?\n";
	while (cin >> answer && i < 6) {
		++i;
		if (answer == "yes") {
			n1 = d;
			cout << "Is your number less than " << d / 2 << "?\n";
			d = d / 2;
		}
		else if (answer == "no") {
			n0 = d;
			cout << "Is your number less than " << (n0 + n1) / 2 << "?\n";
			d = (n0 + n1) / 2;
		}
	}
	keep_window_open();
}
