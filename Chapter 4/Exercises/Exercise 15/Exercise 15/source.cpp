#include "../../../../std_lib_facilities.h"
int main()
{
	int n = 0;
	int a = 1;
	int k = 0;
	cout << "Enter prime number and press 'Enter'.\n";
	cin >> n;
	while (a < n) {
		++a;
		for (int j = 2; j <= n; ++j) {
			a % j;
			if (a % j == 0) {
				++k;
			}
		}
		if (k < 2) {
			cout << a << "\n";
		}
		k = 0;
	}
	keep_window_open();
}