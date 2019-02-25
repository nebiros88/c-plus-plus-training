#include <locale>
#include <iostream>
#include <Windows.h>

using namespace std;

void write_file(const char *name, char* stroka, const char* mode) {
	FILE *f;
	errno_t err = fopen_s(&f, name, mode);
	if (err) {
		cout << "Невозможно открыть файл";
	}
	else {
		fputs(stroka, f);
		fclose(f);
	}
}

void read_file(const char *name, char* stroka, int size) {
	FILE *f;
	errno_t err = fopen_s(&f, name, "r");
	if (err) {
		cout << "Невозможно окрыть файл";
	}
	else {
		while (!feof(f)) {
			fgets(stroka, size, f);
		}
		fclose(f);
	}
}

void encrypt(char *stroka) {
	int size = strlen(stroka) - 1;
	for (int i = 0; i < size; i += 2) {
		if (i == size || stroka[i + 1] == '\n') break;
		char temp = stroka[i];
		stroka[i] = stroka[i + 1];
		stroka[i + 1] = temp;
	}
}

void main()
{
	setlocale(LC_CTYPE, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	constexpr int size = 100;
	char stroka[size];
	cout << "Введите символы для добавления в файл." << endl;
	fgets(stroka, size, stdin);
	write_file("test.txt", stroka, "w");
	// чтение из файла с выводом
	cout << "Чтение символов из файла..." << endl;
	read_file("test.txt", stroka, size);
	// замена символов (четные и нечетный символы меняются местами, вариант 13)
	encrypt(stroka);
	write_file("test.txt", stroka, "a");
	puts(stroka);
	//Расшифровать строку и записать в файл
	cout << endl;
	cout << "Рашифрованная строка из файла - ";
	read_file("test.txt", stroka, size);
	encrypt(stroka);
	write_file("test.txt", stroka, "a");
	puts(stroka);
	char e;
	cin >> e;
}