#include "sum_mas.h"
#include <iostream>
using namespace std;
void sum_mas::add(int i, int x)
{
	mas[i] = x;
}

void sum_mas::sum()
{
	int sum = 0;
	for (int i = 0; i < 10; i++)
	{
		sum += mas[i];
	}
	cout << sum << endl;
}
