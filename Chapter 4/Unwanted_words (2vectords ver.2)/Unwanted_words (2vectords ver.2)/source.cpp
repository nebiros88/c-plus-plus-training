#include "../../../std_lib_facilities.h"
bool is_disliked(string word)
{
	vector<string> dis = { "Brocolli", "Uncle_Jenya", "winter" };
	for (int z = 0; z < dis.size(); ++z) 
		if (word == dis[z]) {
			return true;
		}
		 return false;
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