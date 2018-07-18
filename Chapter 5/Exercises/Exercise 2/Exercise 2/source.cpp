#include "../../../../std_lib_facilities.h"
double ctok(double c) 
{
	c += 273.15;
	return c;
}
int main()
{
	double c = 0;
	cin >> c;
	double k = ctok(c);
	cout << k << '\n';
	keep_window_open();
}
