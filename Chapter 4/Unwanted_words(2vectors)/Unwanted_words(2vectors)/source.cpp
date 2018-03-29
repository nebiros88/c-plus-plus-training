#include "../../../std_lib_facilities.h"
int main()
{
	vector<string> words;
	vector<string> dislike = { "Brocolli", "Unñle_Jenya", "Winter" };
	for (string word; cin >> word;)
	words.push_back(word);
	for (int i = 0; i < words.size(); ++i) {
		for (int z = 0; z < dislike.size(); ++z)
			if (words[i] == dislike[z]) {
				words[i] = "Bleep";
			}
		cout << words[i] << '\n';
	}
	keep_window_open();
}