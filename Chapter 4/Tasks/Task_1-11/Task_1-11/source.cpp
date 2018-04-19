#include "../../../../std_lib_facilities.h"
double convert(double a, string unit) {
	constexpr double cm_per_meter = 100;
	constexpr double cm_per_inches = 2.54;
	constexpr double in_per_feets = 12;
	double result = a;
	if (unit == "cm") {
		result = a / cm_per_meter;
	}
	else if (unit == "in") {
		 result = a * cm_per_inches / cm_per_meter;
	}
	else if (unit == "ft") {
		result = a / in_per_feets * cm_per_inches / cm_per_meter;
	}
	return result;						//возвращаем в метрах
}
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
	double summ = 0;
	cout << "Please, type any value of distance and unit and press 'Enter'.\n";
	while (cin >> a >> unit) {
		double val = convert(a, unit);
		if (units(unit)) {
			++i;
			if (i == 1) {
				min = val;
				max = val;
			}
			else if (val < min) {
				min = val;
			}
			else if (val > max) {
				max = val;
			}
			summ +=val;
		}
		else cout << "Not correct!\n";
	}
	cout << "You have been typed " << i << " times.\n";
	cout << "The distance is " << summ << " meters.\n";
	cout << min << "\t minimal value.\n";
	cout << max << "\t maximal value.\n";
	keep_window_open();
}
