#include "../../../../std_lib_facilities.h"
bool is_unknown(string unit) {
	vector<string> unknown = { "yard", "meter", "km", "gallons" };
	for (int i = 0; i < unknown.size(); ++i)
		if (unit == unknown[i]) {
			return true;
		}
	return false;
}
int main()
{
	constexpr double cm_per_meter = 100;
	constexpr double cm_per_inches = 2.54;
	constexpr double in_per_feets = 12;
	double lenght = 0;
	string unit;
	double min;
	double max;
	cout << "Please, type any  distance and the unit of distance and press 'Enter'.\n";
	cin >> lenght >> unit;
	if (is_unknown(unit)) {
		cout << "The unknown unit. Please, type the correct value of unit!\n";
	}
	min = lenght;
	max = lenght;
	cout << min << "\t minimal value.\n";
	cout << max << "\t maximal value.\n";
	while (cin >> lenght >> unit) {
		if (lenght < min) {
			min = lenght;
			cout << min << "\t minimal value.\n";
		}
		else if (lenght > max) {
			max = lenght;
			cout << max << "\t maximal value.\n";
		}
	}
	keep_window_open();
}