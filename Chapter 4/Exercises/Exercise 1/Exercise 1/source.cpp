#include "../../../../std_lib_facilities.h"
int main()
{
	vector<double> temps;
	for (double temp; cin >> temp;)
		temps.push_back(temp);
	sort(temps);
	cout << "The median is " << temps[temps.size() / 2] << " \n";
	keep_window_open();
}