#include "../../../std_lib_facilities.h"
int main()
{
	int a;
	int b;
	int c;
	cout << "Any three worlds, please! and 'Enter'!\n";
	cin >> a >> b >> c;
	int max = a;
	int min = a;
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}
	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}
	cout << "MAX =" << max << " MIN = " << min << "\n";
	cout << min << ", " << a + b + c - min - max << ", " << max << " \n";

	keep_window_open();
}
