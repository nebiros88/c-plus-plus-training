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
	constexpr double cm_per_meter = 100;
	constexpr double cm_per_inches = 2.54;
	constexpr double in_per_feets = 12;
	double a = 0;
	double min = 0;
	double max = 0;
	int i = 0;
	string unit;
	cout << "Please, type any value of distance and unit and press 'Enter'.\n";
	while (cin >> a >> unit) {
		if (units(unit)) {
			++i;
			if (i == 1) {
				min = a;
				max = a;
				cout << min << "\t minimal value.\n";
				cout << max << "\t maximal value.\n";
			}
			else if (a < min) {
				min = a;
				cout << min << "\t Minimal value.\n";
			}
			else if (a > max) {
				max = a;
				cout << max << "\t Maximal value.\n";
			}
		}
		else cout << "Not correct!\n";
	}
	keep_window_open();
}
