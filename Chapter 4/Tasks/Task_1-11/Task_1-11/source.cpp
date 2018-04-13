#include "../../../../std_lib_facilities.h"
int main()
{
	double a = 0;
	double min;
	double max;
	cout << "Please, type any  number and press 'Enter'.\n";
	cin >> a;
	min = a;
	max = a;
	cout << min << "\t minimal value.\n";
	cout << max << "\t maximal value.\n";
	while (cin >> a) {
		if (a < min) {
			min = a;
			cout << min << "\t minimal value.\n";
		}
		else if (a > max) {
			max = a;
			cout << max << "\t maximal value.\n";
		}
	}
	keep_window_open();
}