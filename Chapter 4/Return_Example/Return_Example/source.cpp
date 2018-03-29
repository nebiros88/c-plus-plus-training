#include "../../../std_lib_facilities.h"
int main()
{
	vector<int> v = { 5, 7, 9, 4, 6, 8 };
	for (int x : v)
		cout << x << '\n';
	keep_window_open();
}
