#include "../../../../std_lib_facilities.h"
int main()
{
	vector<string> words;
	vector<int> repeats;
	int j = 1;
	int max = 0;
	cout << "Please, type any words you wish from 'Enter'.\n";
	for (string word; cin >> word;) {
		words.push_back(word);
	}
	for (int i = 0; i < words.size(); ++i) {
		cout << words[i] << "\t";
	}
	cout << "\n";
	for (int i = 0; i < words.size(); ++i) {
		for (int k = i + 1; k < words.size(); ++k) {
			if (words[i] == words[k]) {
				++j;
			}
		}
		repeats.push_back(j);
		j = 1;
	}
	for (int i = 0; i < repeats.size(); ++i) {
		cout << repeats[i] << "\t";
	}
	cout << "\n";
	j = repeats[0];
	for (int i = 1; i < repeats.size(); ++i) {
		if (j < repeats[i]) {
			max = i;
			j = repeats[i];
		}
	}
	cout << "Moda is " << words[max] << " .\n";
	sort(words);
	cout << "Minamal word is " << words[0] << " \n";
	cout << "Maximal word is " << words[words.size() - 1] << " \n";
	keep_window_open();
}