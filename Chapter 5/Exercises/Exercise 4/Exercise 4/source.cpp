#include "../../../../std_lib_facilities.h"
double ctok(double c)
{
	if (c < -273.15) error("Try another value!");
	c += 273.15;
	return c;
}
int main()
try
{
	double c = 0;
	cin >> c;
	double k = ctok(c);
	cout << k << '\n';
	keep_window_open();
}
catch (exception & e) {
	cerr << e.what() << '\n';
	keep_window_open();
}