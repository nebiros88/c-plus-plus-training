#include "../../../../std_lib_facilities.h"
int main()
{
	vector<string> names;
	vector<double> scores;
	string name;
	double score = ' ';
	int k = 0;
	int x = 0;
	cout << "Enter the name ant the age.\n";
	cin >> name >> score;
	while (name != "noname" && score != 0) {
		names.push_back(name);
		scores.push_back(score);
		cin >> name >> score;
	}
	for (int i = 0; i < names.size(); ++i) {
		for (int j = i + 1; j < names.size(); ++j) {
			if (names[i] == names[j]) {
				++k;
			}
		}
	}
	if (k > 0) {
		cout << "There are similar words.\n";
	}
	if (k == 0) {
		for (int i = 0; i < names.size(); ++i) {
			cout << names[i] << "\t" << scores[i] << "\n";
		}
	}
	keep_window_open();
}