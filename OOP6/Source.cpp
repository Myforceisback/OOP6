#include <iostream>
#include <string>
#include <deque>
#include <locale.h>

using namespace std;
int n;
class container
{
private:
	deque<string> cont;
	int size;
public:
	container() {};
	void add_car(string number_of_car)
	{
		cont.push_back(number_of_car);
	}
	void print()
	{
		for (int i = 0; i < cont.size(); i++)
			cout << cont[i] << endl;
	}
	void delet()
	{
		cont.pop_front();
	}

	void print_element(int index) {
		cout << cont[index];
	}


	~container() {};
};
void Menu()
{
	string number_of_car;
	container number;
	cout << "Введите количество машин для первой очереди: ";
	cin >> n;
	cout << "Введите номера машин для первой очереди: ";
	for (int i = 0; i < n; i++)
	{
		cin >> number_of_car;
		number.add_car(number_of_car);
	}
	container number_2;
	cout << "Введите количество машин для второй очереди: ";
	cin >> n;
	cout << "Введите номера машин для второй очереди: ";
	for (int i = 0; i < n; i++)
	{
		cin >> number_of_car;
		number_2.add_car(number_of_car);
	}
	char a;
	do
	{
		system("cls");
		cout << "Выберите пункт:\n1)Добавить номер в первую очередь \n2)Удалить номер из первой очереди\n3)Просмотреть первую очередь\n 4)Просмотреть конкретную машину из первой очереди \n5)Просмотреть две очереди\n6)Выход->";
		cin >> a;
		switch (a)
		{
		case '1':
			system("cls");
			cout << "Введите количество машин: ";
			cin >> n;
			cout << "Введите номера машин: ";
			for (int i = 0; i < n; i++)
			{
				cin >> number_of_car;
				number.add_car(number_of_car);
			}
			system("pause");
			break;
		case '2':
			system("cls");
			number.delet();
			system("pause");
			break;
		case '3':
			system("cls");
			number.print();
			system("pause");
			break;
		case '4':
			system("cls");
			int index;
			cout << "Введите номер машины";
			cin >> index;
			number.print_element(index);
			system("pause");
		case '5':
			system("cls");
			number.print();
			number_2.print();
			system("pause");
			break;
		case '6':
			exit(0);
		default:
			cout << "Введите правильно!" << endl;
			system("pause");
			break;
		}
	} while (a != '7');

}
int main()
{
	setlocale(LC_ALL, "Ru");
	Menu();

}
