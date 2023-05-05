#include "sum_mas.h"
#include <iostream>

using namespace std;

int main()
{
	sum_mas mas;
	for (int i = 0; i < 10; i++)
	{
		int x;
		cin >> x;
		mas.add(i, x);
	}
	mas.sum();
}