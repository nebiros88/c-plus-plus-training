#include "../../../std_lib_facilities.h"
int main()
{
	char i = 'a';
	while (i <= 'z') {
		int y = i;
		cout << i << '\t' << y << "\n";
		++i;
	}
	keep_window_open();
}