#include "../../../std_lib_facilities.h"
int main()
{
	int a;
	cout << "Please, enter any number and press 'Enter':\n";
	cin >> a;
	if (a % 2 == 1) {
		cout << "Number " << a << " is not even. \n";
		}
	if (a % 2 == 0) {
		cout << "Number " << a << " is even.\n";
	}
	keep_window_open();
	return 0;
}