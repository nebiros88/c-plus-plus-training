#include "../../../../std_lib_facilities.h"
int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	double D = 0;
	double x1 = 0;
	double x2 = 0;
	cout << "Type a b c for quadratic equation.\n";
	while (cin >> a >> b >> c) {
		D = b * b - 4 * a * c;
		if (D < 0) {
			cout << "There is no roots.\n";
		}
		else if (D == 0) {
			x1 = (-b + sqrt(D)) / 2 * a;
			x2 = x1;
			cout << x1 << "\t" << x2;
		}
		else if (D > 0) {
			x1 = (-b + sqrt(D)) / 2 * a;
			x2 = (-b - sqrt(D)) / 2 * a;
			cout << x1 << "\t" << x2;
		}
	}
	keep_window_open();
}