#include "../../../../std_lib_facilities.h"
bool units(string unit) {
	vector<string> units = { "cm", "in", "ft", "m" };
	for (int i = 0; i < units.size(); ++i)
		if (unit == units[i]) {
			return true;
		}
	return false;
}
int main()
{
	double a = 0;
	double min = 0;
	double max = 0;
	int i = 0;
	string unit;
	cout << "Please, type any value of distance and unit and press 'Enter'.\n";
	while (cin >> a >> unit) {
		if (units(unit))
			++i;
		else cout << "Choose another correct unit.\n";
		if (i == 1 && units(unit)) {
			min = a;
			max = a;
			cout << min << "\t minimal value.\n";
			cout << max << "\t maximal value.\n";
		}
		else if (a < min && units(unit)) {
			min = a;
			cout << min << "\t minimal value.\n";
		}
		else if (a > max && units(unit)) {
			max = a;
			cout << max << "\t maximal value.\n";
		}
	}
	keep_window_open();
}
