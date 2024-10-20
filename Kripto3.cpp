#include <iostream>
using namespace std;

//Задача 1.Вычислить сумму целых чисел кратных 4 в интервале от 0 до 200. Решить 3 - мя способами :
//оператор цикла for; оператор цикла do..while; оператор цикла while.

int main() {
	int sum;
	sum = 0;

	for (int i = 0;i < 200; i += 4) {
		sum = sum + i;
		cout << sum << endl;
	}
}
