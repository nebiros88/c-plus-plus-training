#include "../../../../std_lib_facilities.h"
int main()
{
	int n = 0;
	string ans = " ";
	int i = 0;
	vector<double> mumbers;
	cout << "Please, make any number from 0 to 100 and press 'Enter'/\n";
	cout << " Your number less than 50 type yes? if no type no.\n";
	if (ans == "yes") {
		cout << "Is your number less than 50 and greater than 40 or equal 40 type yes or now.\n";
		cin >> ans;
		if (ans == "yes") {
			cout << "Is your number is equal?\n";
			if (ans == "yes") {
				vector <double> numbers = { 40, 42, 44, 46, 48 };
			}
			else vector<double> numbers = { 41, 43, 45, 47, 49 };
		}
		else cout << "Your number is less than 40 an greater then 30 oe equal 30?\n";
		if (ans == "yes") {
			vector<double> numbers = { 30, 31, 32, 33, 34, 35, 36, 37, 38, 39 };
		}
		else cout << "Your number is less than 30 an greater then 20 oe equal 20?\n";
		if (ans == "yes") {
			vector<double> number = { 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 };
		}
		else cout << "Your number is less than 20 an greater then 10 oe equal 10?\n";
		if (ans == "yes") {
			vector<double> numbers = { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };
		}
	}
	else
		
	}
	


}