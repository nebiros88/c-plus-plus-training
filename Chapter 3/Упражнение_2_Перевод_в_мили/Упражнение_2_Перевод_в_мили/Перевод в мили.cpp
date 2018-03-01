#include "../../../std_lib_facilities.h"
int main()
{
	cout << "Please enter your value in miles and press 'Enter'.\n";
	int value;
	cin >> value;
	double value1 = value;
	if (value >= 0) {
		cout << value << " miles = " << value1 * 1.609  << " kilometers.\n";
	}
	keep_window_open();
}