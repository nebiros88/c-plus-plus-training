#include "../../../std_lib_facilities.h"
bool is_disliked(string word)
{
	string dis = "Brocolli";
	if (word == dis)
		return true;
	else return false;
}
int main()
{
	vector<string> words;
	for (string word; cin >> word;)
		words.push_back(word);
		for (int i = 0; i < words.size(); ++i) {
			if (is_disliked(words[i])) {
				cout << "Bleep" << '\n';
			}
			else cout << words[i] << '\n';
		}
	keep_window_open();
}