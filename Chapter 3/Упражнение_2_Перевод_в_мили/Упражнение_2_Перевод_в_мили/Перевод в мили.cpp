#include "../../../std_lib_facilities.h"
int main()
{
	cout << "Please enter your value in miles and press 'Enter'.\n";
	double value;
	cin >> value;
	if (value >= 0) {
		cout << value << " miles = " << value * 1.609  << " kilometers.\n";
	}
	keep_window_open();
}