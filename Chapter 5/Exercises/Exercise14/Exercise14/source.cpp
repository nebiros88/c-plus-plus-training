#include "../../../../std_lib_facilities.h"
int main()
{
	vector<int> monday;
	vector<int> tuesday;
	vector<int> wednesday;
	vector<int> thursday;
	vector<int> friday;
	vector<int> saturday;
	vector<int> sunday;
	vector<string> day_names = { "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday", "mon", "tue", "wed", "thu", "fri", "sat", "sun" };
	int summ_monday = 0;
	int summ_tuesday = 0;
	int summ_wednesday = 0;
	int summ_thursday = 0;
	int summ_friday = 0;
	int summ_saturday = 0;
	int summ_sunday = 0;
	int summ_errors = 0;
	string day = "..";
	int val = 0;
	cout << "Enter the day of the week and any value.\n";
	while (cin >> day >> val) {
		if (day == "monday" || day == "mon") {
			monday.push_back(val);
		}
		if (day == "tuesday" || day == "tue") {
			tuesday.push_back(val);
		}
		if (day == "wednesday" || day == "wed") {
			wednesday.push_back(val);
		}
		if (day == "thursday" || day == "thu") {
			thursday.push_back(val);
		}
		if (day == "friday" || day == "fri") {
			friday.push_back(val);
		}
		if (day == "saturday" || day == "sat") {
			saturday.push_back(val);
		}
		if (day == "sunday" || day == "sun") {
			sunday.push_back(val);
		}
		for (int i = 0; i < day_names.size(); ++i) {

		}
	}
	cout << "Monday (";
	for (int i = 0; i < monday.size(); ++i) {
		cout << monday[i] << '\t';
		summ_monday += monday[i];
	}
	cout << ") Summ is " << summ_monday << '\n';
	cout << "Tuesday (";
	for (int i = 0; i < tuesday.size(); ++i) {
		cout << tuesday[i] << '\t';
		summ_tuesday += tuesday[i];
	}
	cout << ") Summ is " << summ_tuesday << '\n';
	cout << "Wednesday (";
	for (int i = 0; i < wednesday.size(); ++i) {
		cout << wednesday[i] << '\t';
		summ_wednesday += wednesday[i];
	}
	cout << ") Summ is " << summ_wednesday << '\n';
	cout << "Thursday (";
	for (int i = 0; i < thursday.size(); ++i) {
		cout << thursday[i] << '\t';
		summ_thursday += wednesday[i];
	}
	cout << ") Summ is " << summ_thursday << '\n';
	cout << "Friday (";
	for (int i = 0; i < friday.size(); ++i) {
		cout << friday[i] << '\t';
		summ_friday += friday[i];
	}
	cout << ") Summ is " << summ_friday << '\n';
	cout << "Saturday (";
	for (int i = 0; i < saturday.size(); ++i) {
		cout << saturday[i] << '\t';
		summ_saturday += saturday[i];
	}
	cout << ") Summ is " << summ_saturday << '\n';
	cout << "Sunday (";
	for (int i = 0; i < sunday.size(); ++i) {
		cout << sunday[i] << '\t';
		summ_sunday += sunday[i];
	}
	cout << ") Summ is " << summ_sunday << '\n';
	cout << "You enter " << summ_errors << " incorrect names of days!\n";
	keep_window_open();
	keep_window_open();
}