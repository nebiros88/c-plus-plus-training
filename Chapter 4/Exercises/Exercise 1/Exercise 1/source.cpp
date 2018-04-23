#include "../../../../std_lib_facilities.h"
double median(vector<double> temps) {
	double result;
	if (temps.size() % 2 != 0) 
		result = temps[temps.size() / 2];
	else 
		result = ((temps[temps.size() / 2 - 1]) + (temps[temps.size() / 2])) / 2;
	return result;
}
int main()
{
	vector<double> temps;
	for (double temp; cin >> temp;)
		temps.push_back(temp);
	sort(temps);
	cout << "The median is " << median (temps) << " \n";
	keep_window_open();
}