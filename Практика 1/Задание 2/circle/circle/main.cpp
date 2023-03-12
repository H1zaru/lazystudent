#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
	for (int i = 0; i < 3; i++)
	{
		setlocale(LC_ALL, "Russian");
		cout << "¬ведите значени€ окружности #" << i+1 << endl;
		float a, b, c;
		cin >> a >> b >> c;
		circle okr(a, b, c);
		okr.set_circle(a, b, c);
		cout << okr.square() << endl;
		cout << "¬ведите значени€ сторон треугольника дл€ окружности #" << i + 1 << endl;
		float q, w, e;
		cin >> q >> w >> e;
		cout << okr.triangle_around(q, w, e) << endl;
		cout << okr.triangle_in(q, w, e) << endl;
		cout << okr.check_circle(a, b, c) << endl;
	}

}