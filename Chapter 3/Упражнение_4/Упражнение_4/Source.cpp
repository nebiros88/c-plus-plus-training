#include "../../../std_lib_facilities.h"
int main()
{
	cout << "Press any two values \n";
	int val1;
	int val2;
	cin >> val1 >> val2;
	cout << "\nSumm of values = " << val1 + val2 << " \n";
	cout << "\nDifference of values = " << val1 - val2 << " \n";
	cout << "\nComposition of values = " << val1 * val2 << " \n";
	double quotient = val1 / val2;
	cout << "\nQuotient of values = " << quotient << " \n";
	keep_window_open();
}