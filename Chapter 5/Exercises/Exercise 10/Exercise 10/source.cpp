#include "../../../../std_lib_facilities.h"
int main()
try
{
	int n = 0;
	vector<double> values;
	int summ = 0;
	vector<double> diffs;
	cout << "Enter the number of summable values and press 'Enter'.\n";
	cin >> n;
	cout << "Enter any integers (| - for ending input).\n";
	for (double val; cin >> val;) {
		values.push_back(val);
	}
	if (n > values.size()) error("The vector size is smaller than your number of summable values!");
	for (int i = 0; i < n; ++i) {
		summ += values[i];
		if (i < n - 1){
			diffs.push_back(values[i + 1] - values[i]);
		}
	}
	cout << "Summ of first " << n << " values (";
	for (int i = 0; i < n; ++i) {
		cout << values[i] << " , ";
	}
	cout << ") is " << summ << '\n';
	for (double valid : diffs) cout << valid << '\t';
	cout << '\n';
	keep_window_open();
	keep_window_open();
}
catch (runtime_error & e) {
	cerr << e.what() << '\n';
	keep_window_open();
	keep_window_open();
}