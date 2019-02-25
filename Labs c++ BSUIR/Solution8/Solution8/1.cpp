#include <locale>
#include <iostream>
#include <fstream>
#include <iomanip>
#define nameSize 30

using namespace std;

char fileName[nameSize];

struct Date
{
	int day;
	int month;
	int year;
};

struct Receipt
{
	char name[nameSize];
	char mark[nameSize];
	Date arrivalDate[1];
	char masterSurname[nameSize];
	char condition[nameSize];

};

int enterChoice(void);					// Меню выбора для пользователя
void createDB(const char *filename);	// Создание нового файла БД
bool fileExists(const char *fileName);	// Проверка на совпадение имени создаваемого файла
void fileWatch(const char *fileName, const Date *date = NULL);	// Просмотр файла
void fileChange(const char *fileName); // Корректировка записей файла
Receipt* addStruct(Receipt* rec, const int amount);		// Запись структуры с выденлением памяти
void setData(Receipt* rec, const int amount); // Вносим данные, заполняем квитанцию
void sortByName(Receipt * rec, int arraySize);

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int choice;
	while ((choice = enterChoice()) != 5) {
		switch (choice) {
		case 1:
			do {
				cout << "Введите имя нового файла...\n" << "?" << endl;
				cin >> fileName;
			} while (fileExists(fileName));
			createDB(fileName);
			break;
		case 2:
			fileWatch(fileName);
			break;
		case 3:
			fileChange(fileName);
			break;
		case 4:
		{
			Date tempDate;
			cout << "Введите дату приема заказов(д. м. год)" << endl;
			cin >> tempDate.day >> tempDate.month >> tempDate.year;
			fileWatch(fileName, &tempDate);
		}
		break;
		default:
			cout << "Неверный выбор!" << endl;
			break;
		}
	}


}
// Выбираем раздел меню 
int enterChoice(void) {
	cout << endl << "Выберите, что вы хотите сделать: " << endl
		<< "1 - создание нового файла" << endl
		<< "2 - просмотр файла" << endl
		<< "3 - корректировка записей файла" << endl
		<< "4 - выполнение задачи" << endl
		<< "5 - выход" << endl << "?" << endl;
	int menuChoice;
	cin >> menuChoice;
	return menuChoice;
}

// Создание нового файла баз данных с нулями
void createDB(const char *fileName) {
	FILE *f;
	fopen_s(&f, fileName, "wb");
	if (!(f))
		cout << "Файл не может быть создан!\n" << endl;
	fclose(f);
	cout << "Файл баз данных с именем " << fileName << " успешно создан...\n ?" << endl;
}

//Проверка на совпадение имени нового файла с существующими
bool fileExists(const char *fileName) {
	FILE *f;
	errno_t err = fopen_s(&f, fileName, "r");
	if (err)
		return false;
	else {
		fclose(f);
		return true;
	}
}

// Просмотр файла
void fileWatch(const char *fileName, const Date *date)
{
	if (!fileExists(fileName))
		cout << "Ошибка открытия файла!" << endl;
	else {
		int recAmount = 0;
		FILE *f;
		fopen_s(&f, fileName, "rb");
		cout << setw(5) << "Номер записи" << setw(15) << "Наименование"
			<< setw(20) << "Марка изделия" << setw(15) << "Дата приемки"
			<< setw(20) << "Фамилия мастера" << setw(20) << "Состояние заказа"
			<< endl;
		fseek(f, 0, SEEK_END);
		recAmount = ftell(f) / sizeof(Receipt);
		fseek(f, 0, SEEK_SET);
		Receipt * rec = new Receipt[recAmount];
		fread(rec, sizeof(Receipt), recAmount, f);
		if (date != NULL)
			sortByName(rec, recAmount);
		for (int i = 0; i < recAmount; i++) {
			if (date == NULL || rec[i].arrivalDate->day == date->day && rec[i].arrivalDate->month == date->month && rec[i].arrivalDate->year == date->year)
				cout << setw(5) << i + 1 << setw(15) << rec[i].name
				<< setw(20) << rec[i].mark << setw(15) << rec[i].arrivalDate->day << rec[i].arrivalDate->month << rec[i].arrivalDate->year
				<< setw(20) << rec[i].masterSurname << setw(10) << rec[i].condition
				<< endl;
		}
		fclose(f);
	}
}

// Добавить структуру в массив (динамический)
Receipt* addStruct(Receipt* rec, const int amount) {
	if (amount == 0) {
		rec = new Receipt[amount + 1];	// Выденление памяти для первой струтуры
	}
	else {
		Receipt* temprec = new Receipt[amount + 1];
		for (int i = 0; i < amount; i++) {
			temprec[i] = rec[i];		// Копируем во временный обьект
		}
		delete[] rec;
		rec = temprec;
	}
	return rec;
}
// Заполнение одной квитанции
void setData(Receipt* rec, const int amount) {
	cout << "Наименование...\n";
	cin >> rec[amount].name, nameSize;
	cout << "Марка....\n";
	cin >> rec[amount].mark, nameSize;
	cout << "Дата поступления (день, месяц, год)";
	cin >> rec[amount].arrivalDate->day;
	cin >> rec[amount].arrivalDate->month;
	cin >> rec[amount].arrivalDate->year;
	cout << "Фамилия мастера приемщика...\n";
	cin >> rec[amount].masterSurname, nameSize;
	cout << "Статус заказа...\n";
	cin >> rec[amount].condition, nameSize;
	cout << endl;
}

// Корректировка записей файла
void fileChange(const char *fileName) {
	int menuChoice;
	cout << endl << "Выберите, что вы хотите сделать: " << endl
		<< "1 - изменить запись" << endl
		<< "2 - добавить новую запись" << endl
		<< "3 - удалить запись" << endl << "?" << endl;
	cin >> menuChoice;
	switch (menuChoice)
	{
	case 1:
	{
		FILE *f;
		fopen_s(&f, fileName, "rb");
		int recNumber = 0;
		int recAmount = 0;
		fseek(f, 0, SEEK_END);
		recAmount = ftell(f) / sizeof(Receipt);
		fseek(f, 0, SEEK_SET);
		Receipt * rec = new Receipt[recAmount];
		fread(rec, sizeof(Receipt), recAmount, f);
		fclose(f);
		cout << "Выберите номер записи которую вы хотите изменить?" << endl;
		cin >> recNumber;
		while (recNumber > recAmount) {
			cout << "Не верный выбор! Выберите номер записи которую вы хотите изменить?" << endl;
			cin >> recNumber;
		}
		setData(rec, recNumber - 1);
		fopen_s(&f, fileName, "w+b");
		fwrite(rec, sizeof(Receipt), recAmount, f);
		fclose(f);
		delete[] rec;
	}
	break;
	case 2:
	{
		FILE *f;
		fopen_s(&f, fileName, "ab");
		Receipt * rec = 0;
		int recAmount = 0;
		int YesorNo = 0;
		do {
			rec = addStruct(rec, recAmount);
			setData(rec, recAmount);
			recAmount++;
			cout << "Продолжить ввод данных (1 - да, 0 - нет)" << endl;
			cin >> YesorNo;
			cin.get();
		} while (YesorNo != 0);
		fwrite(rec, sizeof(rec[recAmount]), recAmount, f);
		fclose(f);
	}
	break;
	case 3:
	{
		FILE *f;
		fopen_s(&f, fileName, "rb");
		int recNumber = 0;
		int recAmount = 0;
		fseek(f, 0, SEEK_END);
		recAmount = ftell(f) / sizeof(Receipt);
		fseek(f, 0, SEEK_SET);
		Receipt * rec = new Receipt[recAmount];
		fread(rec, sizeof(Receipt), recAmount, f);
		fclose(f);
		cout << "Выберите номер записи которую вы хотите удалить?" << endl;
		cin >> recNumber;
		while (recNumber > recAmount) {
			cout << "Не верный выбор! Выберите номер записи которую вы хотите удалить?" << endl;
			cin >> recNumber;
		}
		for (int i = recNumber; i < recAmount; i++) {
			rec[i - 1] = rec[i];
		}
		fopen_s(&f, fileName, "w+b");
		fwrite(rec, sizeof(Receipt), recAmount - 1, f);
		fclose(f);
		delete[] rec;
	}
	break;
	default:
		cout << "/n Не верный выбор!" << endl;
	}
}

void sortByName(Receipt * rec, int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		for (int j = i + 1; j < arraySize; j++) {
			if (strcmp(rec[i].masterSurname, rec[j].masterSurname) > 0) {
				Receipt temp = rec[i];
				rec[i] = rec[j];
				rec[j] = temp;
			}
		}
	}
}
