#include "calc.h"
#include <iostream>
using namespace std;

calc::calc()
{
	a = 0; b = 0;
}
void calc::sum(int a1, int b1)
{
	cout << a1 + b1 << endl;
}

void calc::raz(int a1, int b1)
{
	cout << a1 - b1 << endl;
}

void calc::umn(int a1, int b1)
{
	cout << a1 * b1 << endl;
}

void calc::del(int a1, int b1)
{
	cout << a1 / b1 << endl;
}
