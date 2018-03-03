#include "../../../std_lib_facilities.h"
int main()
{	
	int a;
	int b;
	int c;
	cout << " Please, put three simple numbers :\n";
	cin >> a >> b >> c;
	int temp = a;
	if (a > b){
		a = b;
		b = temp;
	}
	if (b > c) {
		temp = b;
		b = c;
		c = temp;
	}
	if (a > b) {
		temp = b;
		b = a;
		a = temp;
	}
	cout << a << b << c << "\n";
	keep_window_open();
}