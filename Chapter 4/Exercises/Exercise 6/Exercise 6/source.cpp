# include "../../../../std_lib_facilities.h"
string rename(string a) {
	vector<string> a = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	for (int i = 0; i < a.size(); ++i);

}

int main()
{
	string b = 0;
	cout << "Please make any number from 0 to 9  and press 'Enter'/\n";
	while (cin >> b) {
		cout << rename(b);
	}
	keep_window_open();
}