#include "../../../../std_lib_facilities.h"
int main()
{
	vector<int> numbers;
	vector<int> times;
	int k = 1;
	int b = 0;
	int c = 0;
	cout << "Any numbers.\n";
	for (int num; cin >> num;) {
		numbers.push_back(num);
	}
	for (int i = 0; i < numbers.size(); ++i) {
		cout << numbers[i] << "\t";
	}
	cout << "\n";
	for (int i = 0; i < numbers.size(); ++i) {
		for (int n = i + 1; n < numbers.size(); ++n) {
			if (numbers[i] == numbers[n]) {
				++k;
			}
		}
		times.push_back(k);
		k = 0;
	}
	for (int j = 0; j < times.size(); ++j) {
		cout << times[j] << "\t";
	}
	cout << "\n";
	for (int i = 0; i < numbers.size(); ++i) {
		c = times[i];
		for (int j = i; j < times.size(); ++j) {
			b = times[j];
			sort(times);
			if (b == times[times.size() - 1]) {
				cout << c;
			}
		}
	}
	keep_window_open();
}