#include <iostream>
using namespace std;

//Задача 2. Составить программу и трассировку программы вычисления СУММЫ элементов
//последовательности.Использовать цикл do..while.

int main() {
	double a;
	cin >> a;
	double sum;
	sum = 0;

	do{
		double b = 1 / a;
		a = a + 5;
		sum = sum + b;
		cout << b << endl;
	} while (a <= 100);
	cout << sum << endl;
}
