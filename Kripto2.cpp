#include <iostream>
using namespace std;

//Описание: Напишите программу, которая запрашивает у пользователя
//номер месяца(от 1 до 12) и выводит соответствующее время года :

int main() {
	int a;

	cout << "Enter: ";
	cin >> a ;
	switch (a) {
	case 1:
	case 2:
	case 12:
		cout << "Winter" << endl;
		break;
	case 3:
	case 4:
	case 5:
		cout << "Spring" << endl;
		break;
	case 6:
	case 7:
	case 8:
		cout << "Summer" << endl;
		break;
	case 9:
	case 10:
	case 11:
		cout << "Autumn" << endl;
		break;
	}
}
