#include "../../../std_lib_facilities.h"
int  main()
{
	vector<string> words;				// Создаем вектор с типом данных  string и нзванием words
	for (string temp; cin >> temp;)		// Чтение слов, разделеных пробельными символами
		words.push_back(temp);			// Внесение их в вектор
	cout << "There is " << words.size() << " words. \n";
	sort(words);						// Сортировка слов
	for (int i = 0; i < words.size(); ++i)
		if (i == 0 || words[i - 1] != words[i])		//Это новое слово
			cout << words[i] << '\n';
	keep_window_open();
}