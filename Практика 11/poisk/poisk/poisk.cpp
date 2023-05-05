#include "poisk.h"
#include <iostream>
using namespace std;

void poisk::add(int i, int x)
{
	mas[i] = x;
}

void poisk::max()
{
	int max = mas[1];
	for (int i = 1; i < 10; i++)
	{
		if (mas[i] > max) { max = mas[i]; }
		else continue;
	}
	cout << max << endl;
}

void poisk::min()
{
	int min = mas[1];
	for (int i = 1; i < 10; i++)
	{
		if (mas[i] < min) { min = mas[i]; }
		else continue;
	}
	cout << min << endl;
}
