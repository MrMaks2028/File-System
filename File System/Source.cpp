#include <iostream>
#include <fstream> //библиотека, позволяющая работать с файловой системой. Содержит в себе классы ofstream, ifstream, fstream. 
#include <string>
using namespace std;

bool statistic(string str) {
	ofstream out;
	out.open("stat.txt", ios::app);
	if (out.is_open()) {
		out << str << " " << str.size() << "\n";
		out.close();
		return true;
	}
	out.close();
	return false;
}

int main() {
	setlocale(LC_ALL, "Russian");
	/*string path = "file.txt"; // строка, содержащая путь к файлу
	ofstream out; // объект класса ofstream, который позволяет записывать данные в файл
	out.open(path, ios::app); // открываем файл в режими ios::app, чтобы добавлять к нему записи

	if (out.is_open()) { // проверка на то, удалось ли открыть файл
		cout << "Файл открыт для записи\n";
		string input;
		for (int i = 0; i < 3; i++) {
			cout << "Введите строку:\n";
			getline(cin, input);
			out << input << "\n"; // запись данных в файл
		}
	}
	else
		cout << "Ошибка открытия файла\n";
	out.close(); // закрытие файла (обнуление объекта out)
	cout << endl;

	ifstream in; // объект класса ifstream, который позволяет считывавть данные из файла
	in.open(path); // октрываем файл для считывания

	if (in.is_open()) {
		cout << "Файл открыт для чтения\n";
		string str;
		//считывание из файла посимвольно
		/ *char sym; // символьная переменная, хранящая в себе символы из файла
		while (in.get(sym)) // метод get считывает символ из файла и помещает его в sym. Ввозвращает false, если считывание не удалось
			str += sym;
		cout << str;* /
		string tmp;
		//пословное считывание из файла
		/ *while (!in.eof()) {
			tmp = "";
			in >> tmp;
			cout << tmp << endl;
			str += tmp + "\n";
		}* /
		//построчное считывание из файла
		while (!in.eof()) {
			getline(in, tmp);
			cout << tmp << endl;
			str += tmp + "\n";
		}
	}
	else
		cout << "Ошибка открытия файла\n";
	in.close();

	if (remove("file.txt")) // 0 -удаление прошло успешно. Любое другое число - удаление не выполнено
		cout << "Ошибка удаления файла";
	else
		cout << "Файл удалён\n";*/

	// Задача 1
	cout << "Задача 1\nВведите слово:\n";
	string word;
	cin >> word;
	if (statistic(word))
		cout << "Слово записано\n";
	else
		cout << "Ошибка записи\n";
	cout << "Введите слово:\n";
	cin >> word;
	if (statistic(word))
		cout << "Слово записано\n\n";
	else
		cout << "Ошибка записи\n\n";

	cin.ignore();

	return 0;
}