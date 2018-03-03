#include "../../../std_lib_facilities.h"
int main()
{
	double val1;
	double val2;
	cout << "Press any two values \n";
	cin >> val1 >> val2;
	double min = val1;
	double max = val2;
	
	if (val1 > val2) {
		min = val2;
		max = val1;
	}
	cout << "Min = " << min << "Max = " << max << '\n';
	cout << "\nSumm of values = " << val1 + val2 << " \n";
	cout << "\nDifference of values = " << val1 - val2 << " \n";
	cout << "\nComposition of values = " << val1 * val2 << " \n";
	cout << "\nQuotient of values = " << val1 / val2 << " \n";
	keep_window_open();
}