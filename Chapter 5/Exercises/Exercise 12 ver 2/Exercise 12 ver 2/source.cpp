#include "../../../../std_lib_facilities.h"
vector<int> revers(vector<int> answers)
{
	vector<int> my_vector;
	for (int i = answers.size() - 1; i >= 0; --i) {
		my_vector.push_back(answers[i]);
	}
	return my_vector;
}
vector<int> digits_search(int answer)
try
{
	int n = answer;
	vector<int> answers;
	int n1 = '..';
	while (n != 0) {
		if (n1 == n % 10) error("The near values should not repeated!\n");
		answers.push_back(n % 10);
		n1 = n % 10;
		n /= 10;
	}
	if (answers.size() < 4 || answers.size() > 4) error("Not correct numbers of numbers!\n");
	return revers(answers);
}
catch (runtime_error & e) {
	cerr << e.what() << '\n';
	keep_window_open();
	keep_window_open();
}
int main()
try
{
	vector<int> values = { 1, 2, 3, 4 };
	bool result = false;
	int answer = 0;
	cout << "Please, enter four values from 0 to 9 and press 'Enter'.\n";
	while (result != true) {
		cin >> answer;
		int bools = 0;
		int cows = 0;
		vector<int> answers = digits_search(answer);
		for (int i : answers) {
			cout << i << '\t';
		}
		cout << '\n';
		for (int i = 0; i < values.size(); ++i) {
			for (int j = 0; j < answers.size(); ++j)
				if (answers[j] == values[i] && i == j) {
					++bools;
				}
				else if (answers[j] == values[i]) {
					++cows;
				}
		}
		cout << bools << " bools " << cows << " cows\n";
		if (bools == 4) result = true;
	}
	cout << "You are winnwe!\n";
	keep_window_open();
}
catch (runtime_error & e) {
	cerr << e.what();
	keep_window_open();
	keep_window_open();
}