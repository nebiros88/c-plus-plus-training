#include "../../../../std_lib_facilities.h"
int main() {
	int n0 = 0;
	int n1 = 100;
	string answer;
	int n = 0;
	int i = 0;
	int d = (n0 + n1) / 2;
	cout << "Please, make a number in case between 0 and 100 and if your are ready, type 'yes'.\n";
	while (cin >> answer && n1 != n0 + 2) {
		if (answer == "yes" || answer == "no")
			++i;
		if (i > 1 && n1 != n0 + 2 && answer == "yes") {
			n1 = d - 1;
			d = (n0 + n1 + 1) / 2;
			if (n1 == d) {
				n0 = d;
			}
		}
		else if (i > 1 && n1 != n0 + 2 && answer == "no") {
			n0 = d;
			d = (n0 + n1) / 2;
			if (n0 == d) {
				n1 = d;
			}
		}
		cout << "Is your number less than " << d << "?\n";
	}
	if (n1 == n0 + 2 && answer == "yes") {
		cout << "Your number is " << d - 1 << " !\n";
	}
	if (n1 == n0 + 2 && answer == "no") {
		cout << "Your number is " << d << " ???\n";
	}
	cin >> answer;
	if (answer == "no")
		cout << "Your number is " << d + 1 << " !\n";
	keep_window_open();
}