#include "../../../std_lib_facilities.h"
int  main()
{
	vector<string> words;				// ������� ������ � ����� ������  string � �������� words
	for (string temp; cin >> temp;)		// ������ ����, ���������� ����������� ���������
		words.push_back(temp);			// �������� �� � ������
	cout << "There is " << words.size() << " words. \n";
	sort(words);						// ���������� ����
	for (int i = 0; i < words.size(); ++i)
		if (i == 0 || words[i - 1] != words[i])		//��� ����� �����
			cout << words[i] << '\n';
	keep_window_open();
}