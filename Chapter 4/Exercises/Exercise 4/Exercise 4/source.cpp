#include "../../../../std_lib_facilities.h"
int main() {
	int n0 = 0;
	int n1 = 100;
	string answer;
	int n = 0;
	int i = 0;
	int d = 0;
	cout << "Please, make a number in case between 0 and 100. Is your number less than " << (n0 + n1) / 2 << "?\n";
	while (cin >> answer && i < 6) {
		++i;
		d = (n0 + n1) / 2;
		if (i >= 1 && i < 6 && answer == "yes") {
			n1 = (n0 + n1) / 2;
			cout << "Is your number less than " << d << "?\n";
		}
		else if (i == 1 && answer == "no") {
			n0 = (n0 + n1) / 2;
			cout << "Is your number less than " << (n0 + n1) / 2 << "?\n";
		}
		if (i == 6 && answer == "yes") {
			n1 = (n0 + n1) / 2;
			cout << "Your number is " << d - 1 << "!\n";
		}
		if (i == 6 && answer == "no") {

		}
		/*if (i != 1 && i <= 5 && answer == "yes") {
			n1 = n1 / 2;
			cout << "Is your number less than " << n1 / 2 << "?\n";
		}
		else if (i != 1 && i <= 5 && answer == "no") {
			n0 = n1 / 2;
			cout << "Is your number less than " << (n0 + (n1- 1)) / 2 << "?\n";
		}*/
		/*if (i >= 4 && answer == "yes") cout << "Your number is" << n0 << "?\n";
		else if (i > 5 && answer == "no") {
			n1 = n1 / 2 - 1;
			cout << "Your number is" << n1 << "?\n";
		}
		if (i >= 4 && answer == "no") {
			n0 = n1 / 2;
			cout << "Your number less than " << (n0 + n1 - 1) / 2 << "?\n";
		}
		if (i == 6 && answer == "yes") {
			cout << "Your number is " << n0 << "!\n";
		}	*/
	}
	n = n0;
	n = n1;
	keep_window_open();
}
