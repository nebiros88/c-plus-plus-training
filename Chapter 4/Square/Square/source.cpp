#include "../../../std_lib_facilities.h"
int square(int x)
{
	int box = 0;
	for (int i = 0; i < x; ++i) {
		box += x;
	}
	return box;
}
int main()
{
	int x;
	cout << "Enter x \n";
	cin >> x;
	cout << "Square " << x << "=" << square(x) << '\n';
	keep_window_open();
}