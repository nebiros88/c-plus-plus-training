#include "../../../../std_lib_facilities.h"
bool is_weekday(string day)
{
	vector<string> day_names = { "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday", "mon", "tue", "wed", "thu", "fri", "sat", "sun" };
	for (int i = 0; i < day_names.size(); ++i) {
		if (day == day_names[i]) {
			return true;
		}
	}
	return false;
}
int summ(vector<int>day)
{
	int summ = 0;
	for (int i = 0; i < day.size(); ++i) {
		summ += day[i];
	}
	return summ;
}
void print(vector<int>days) {
	for (int i : days) {
		cout << i << '\t';
	}
}
int main()
{
	vector<int> monday;
	vector<int> tuesday;
	vector<int> wednesday;
	vector<int> thursday;
	vector<int> friday;
	vector<int> saturday;
	vector<int> sunday;
	string day = "..";
	int val = 0;
	int summ_errors = 0;
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
		if (is_weekday(day)== false) {
			++summ_errors;
			cout << "Incorrect day name!\n";
		}
	}
	cout << "Monday (";
	print(monday);
	cout << ") Summ is " << summ(monday) << '\n';
	cout << "Tuesday (";
	print(tuesday);
	cout << ") Summ is " << summ(tuesday) << '\n';
	cout << "Wednesday (";
	print(wednesday);
	cout << ") Summ is " << summ(wednesday) << '\n';
	cout << "Thursday (";
	print(thursday);
	cout << ") Summ is " << summ(thursday) << '\n';
	cout << "Friday (";
	print(friday);
	cout << ") Summ is " << summ(friday) << '\n';
	cout << "Saturday (";
	print(saturday);
	cout << ") Summ is " << summ(saturday) << '\n';
	cout << "Sunday (";
	print(sunday);
	cout << ") Summ is " << summ(sunday) << '\n';
	cout << "You enter " << summ_errors << " incorrect names of days!\n";
	keep_window_open();
	keep_window_open();
}