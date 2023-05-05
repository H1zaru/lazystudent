#include "poisk.h"
#include <iostream>
using namespace std;

int main()
{
	poisk mas;
	for (int i = 0; i < 10; i++)
	{
		int x;
		cin >> x;
		mas.add(i, x);
	}
	mas.max();
	mas.min();
}