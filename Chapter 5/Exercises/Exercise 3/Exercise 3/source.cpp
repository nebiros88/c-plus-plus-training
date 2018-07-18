#include "../../../../std_lib_facilities.h"
double ctok(double c)
{
	c += 273.15;
	return c;
}
int main()
try
{
	double c = 0;
	cin >> c;
	double k = ctok(c);
	if (k < 0) error( "Try another value!");
	cout << k << '\n';
	keep_window_open();
}
catch (exception & e) {
	cerr << e.what() << '\n';
	keep_window_open();
}