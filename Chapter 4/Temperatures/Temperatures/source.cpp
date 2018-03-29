#include "../../../std_lib_facilities.h"
int main()
{
	vector<double> temps;
	for (double temp; cin >> temp;)
		temps.push_back(temp);
	double sum = 0;
	for (int x : temps) sum += x;
		cout << "Average temperature: " << sum / temps.size() << '\n';
	sort(temps);
		cout << "Middle temperature is :" << temps[temps.size() / 2] << '\n';
	keep_window_open();
}