#include "../../../../std_lib_facilities.h"
int main()
try
{
	int n = 0;
	vector<int> integers;
	int summ = 0;
	cout << "Enter the number of summable values and press 'Enter'.\n";
	cin >> n;
	cout << "Enter any integers (| - for ending input).\n";
	for (int val; cin >> val;) {
		integers.push_back(val);
	}
	if (n > integers.size()) error("The vector size is smaller than your number of summable values!");
	for (int i = 0; i < n; ++i) {
		summ += integers[i];
	}
	cout << "Summ of first " << n << " values (";
	for (int i = 0; i < n; ++i) {
		cout << integers[i] << " , ";
	}
	cout << ") is " << summ << '\n';
	keep_window_open();
	keep_window_open();
}
catch (runtime_error & e) {
	cerr << e.what() << '\n';
	keep_window_open();
	keep_window_open();
}