#include "../../../std_lib_facilities.h"
int main()
{
	for (char i = '0'; i <= 'z'; ++i) {
		if ((i >= '0' && i <= '9') || (i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
			cout << i << '\t' << int(i) << '\n';
		}
	keep_window_open();
}