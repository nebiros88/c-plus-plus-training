#include "../../../../std_lib_facilities.h"
#include "locale"

void arrayPrint(int response[], int arraySize)
{
	cout << "Массив случайных чисел от 0 до 99 " << endl;
	for (int i = 0; i <= arraySize; ++i) {
		cout << response[i] << '\t';
		if (i == 19 || i == 39 || i == 59 || i == 79) {
			cout << endl;
		}
	}
}

int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int responseSize = 99;
	int response[responseSize] = { 0 };
	int frequency[10] = { 0 };
	srand(time(NULL));
	for (int i = 0; i <= responseSize; ++i) {
		response[i] = rand() % 99;
	}
	arrayPrint(response, responseSize);
	keep_window_open();
}


