#include "../../../std_lib_facilities.h"
int main()
{
	cout << "Press any two values \n";
	int val1;
	int val2;
	cin >> val1 >> val2;
	if (val1 < val2) {
		int min = val1;
		int max = val2;
		cout << "Min = " << min << "Max = " << max << '\n';
	}
	if (val1 > val2) {
		int min = val2;
		int max = val1;
		cout << "Max = " << max << "Min = " << min << '\n';
	}
	cout << "\nSumm of values = " << val1 + val2 << " \n";
	cout << "\nDifference of values = " << val1 - val2 << " \n";
	cout << "\nComposition of values = " << val1 * val2 << " \n";
	double x = val1;
	double y = val2;
	cout << "\nQuotient of values = " << x / y << " \n";
	keep_window_open();
}