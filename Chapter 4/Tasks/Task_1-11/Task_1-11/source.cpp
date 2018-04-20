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
	vector<double> values;
	cout << "Please, type any value of distance and unit and press 'Enter'.\n";
	while (cin >> a >> unit) {
		if (units(unit)) {
			double val = convert(a, unit);
			values.push_back(val);
			summ +=val;
		}
		else cout << "Not correct!\n";
	}
	cout << "You have been typed " << values.size() << " times.\n";
	cout << "The distance is " << summ << " meters.\n";
	sort(values);
	cout << values[1] << "\t minimal value.\n";
	cout << values[values.size() - 1] << "\t maximal value.\n";
	cout << "The vector is: ";
	for (int z: values) {
			cout << values[z] << " ";
		}
	cout << "\n";
	keep_window_open();
}
