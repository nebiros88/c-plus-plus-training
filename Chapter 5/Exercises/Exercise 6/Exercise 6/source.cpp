#include "../../../../std_lib_facilities.h"
double celcium_to_fahrenheit(double c)
{
	c = c * 1.8 + 32;
	return c;
}
double fahrenheit_to_celcium(double f)
{
	f = (f - 32) / 1.8;
	return f;
}
int main()
{
	double c = 0;
	double f = 0;
	double result = 0;
	cin >> c;
	result = celcium_to_fahrenheit(c);
	cout << result << " degrees of fahrenheit.\n";
	f = celcium_to_fahrenheit(c);
	result = fahrenheit_to_celcium(f);
	cout << result << " degrees of celcium.\n";
	keep_window_open();
}