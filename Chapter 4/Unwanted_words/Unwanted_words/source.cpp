#include "../../../std_lib_facilities.h"
int main()
{
	vector<string> words;
	for (string word; cin >> word;)
		words.push_back(word);
	string dislike = "Brocolli";
	for (int i = 0; i < words.size(); ++i)
		if (words[i] != dislike)
			cout << words[i] << '\n';
		else if (words[i] == dislike)
			cout << "Bleep \n";
	keep_window_open();
}