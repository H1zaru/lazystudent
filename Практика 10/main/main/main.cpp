#include "calc.h"
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	setlocale(LC_ALL, "ru");
	cout << "Введите число 1" << endl;
	cin >> a;
	cout << "Введите число 2" << endl;
	cin >> b;
	cout << "Укажите необходимую операцию: \n" << "1 - сложение\n" << "2 - вычитание\n" << "3 - умножение\n" << "4 - деление" << endl;
	int t;
	cin >> t;
	calc result;
	if (t == 1) { result.sum(a, b); }
	else if (t == 2) { result.raz(a, b); }
	else if (t == 3) { result.umn(a, b); }
	else if (t == 4) { result.del(a, b); }
}