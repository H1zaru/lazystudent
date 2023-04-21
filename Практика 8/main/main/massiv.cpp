#include "massiv.h"
#include <iostream>
using namespace std;
void massiv::add(int i, int x)
{
	mas[i] = x;
}

void massiv::show()
{
	for (int i = 0; i < 10; i++)
	{
		cout << mas[i] << " ";
	}
}

