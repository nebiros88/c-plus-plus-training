#include "../../../../std_lib_facilities.h"
int main()
{
	vector<string> names;
	vector<double> scores;
	string name;
	double score;
	int k = 0;
	cout << "Enter the name ant the age.\n";
	while (name != "noname" || score != 0) {
		cin >> name >> score;
		names.push_back(name);
		scores.push_back(score);
	}
	for (int i = 0; i < names.size(); ++i) {
		for (int j = 1; j < names.size(); ++j) {
			if (names[i] == names[j]) {
				++k;
			}
		}
	}
	if (k >= 1) {
		cout << "There are "<< k << " similar words.\n";
	}
	else  if (k < 1) {
		for (int i = 0; i < names.size(); ++i) {
			cout << names[i] << "\t" << scores[i] << "\n";
		}
	}
	keep_window_open();
}