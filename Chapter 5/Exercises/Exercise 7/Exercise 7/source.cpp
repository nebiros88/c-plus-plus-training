#include "../../../../std_lib_facilities.h"
void quadratic_equation(double a, double b, double c)
{
	double x1 = 0;
	double x2 = 0;
	double d = b * b - 4 * a * c;
	if (d < 0) error("There are no valid roots in this equal!\n");
	else {
		x1 = (-b + sqrt(d)) / 2 * a;
		x2 = (-b - sqrt(d)) / 2 * a;
		cout << x1 << '\n' << x2 << '\n';
	}
}
int main()
try{
	double a = 0;
	double b = 0;
	double c = 0;
	cout << "Please, enter a, b, c!\n";
	cin >> a >> b >> c;
	quadratic_equation(a, b, c);
	keep_window_open();
}
catch (runtime_error & e) {
	cerr << e.what() << '\n';
	keep_window_open();
}