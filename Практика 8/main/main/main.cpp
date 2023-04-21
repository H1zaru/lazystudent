#include "massiv.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	massiv mas;
	for (int i = 0; i < 10; i++)
	{
		int x;
		cin >> x;
		mas.add(i, x);
	}
	mas.show();
}