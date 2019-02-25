
#include "../../../../std_lib_facilities.h"
#include <iostream>
#include <locale>

using namespace std;

void printHeader(int); // Печать заголовка входных данных
int binarySearch(int[], int, int, int, int); // Двоичный поиск
void printRow(int[], int, int, int, int); // Печать одной строки, показывающей текущую обрабатываемую часть массива


int main() 
{
	setlocale(LC_CTYPE, "Russian");
	char k;
	const int arraySize = 15;
	int a[arraySize], key, result;
	for (int i = 0; i < arraySize; ++i) {
		a[i] = 2 * i;
	}
	cout << "Введите ключ  - число, находящееся между 0 и 28: ";
	cin >> key;
	printHeader(arraySize);
	result = binarySearch(a, key, 0, arraySize - 1, arraySize);
	if (result != -1)
		cout << endl << key << " найден в элементе массива " << result << endl;
	else
		cout << endl << key << " не найден" << endl;
	return 0;
	cin >> k;
}

void printHeader(int size) {
	cout << endl << "Индексы:" << endl;
	for (int i = 0; i < size; ++i) {
		cout << setw(3) << i << ' ';
	}
	cout << endl;
	for (int i = 0; i < size; ++i) {
		cout << "----";
	}
	cout << endl;
}

int binarySearch(int b[], int searchKey, int low, int high, int size) {
	int middle;
	while (low <= high) {
		middle = (low + high) / 2;
		printRow(b, low, middle, high, size);
		if (searchKey == b[middle])
			return middle;
		else if (searchKey < b[middle])
			high = middle - 1;
		else
			low = middle - 1;
	}
	return -1;
}

void printRow(int b[], int low, int mid, int high, int size) {
	for (int i = 0; i < size; ++i) {
		if (i < low || i > high)
			cout << "    ";
		else if (i == mid)
			cout << setw(3) << b[i] << '*';
		else
			cout << setw(3) << b[i] << ' ';
	}
	cout << endl;
}
