#include <iostream>
#include "circle.h"
#include <cmath>

using namespace std;

circle::circle(float r, float x, float y)
{
	radius = r;
	x_center = x;
	y_center = y;
}
void circle::set_circle(float r, float x, float y)
{
	radius = r;
	x_center = x;
	y_center = y;
}
float circle::square()
{
	float s = 2 * radius * 3.14;
	return s;
}
bool circle::triangle_around(float a, float b, float c)
{
	float pp = (a + b + c) / 2;
	float s = sqrt(pp * (pp - a) * (pp - b) * (pp - c));
	return a * b * c / 4 / s == radius;
}
bool circle::triangle_in(float a, float b, float c)
{
	float pp = (a + b + c) / 2;
	float s = sqrt(pp * (pp - a) * (pp - b) * (pp - c));
	return s / pp == radius;
}
bool circle::check_circle(float r, float x_cntr, float y_cntr)
{
	float a = x_center - x_cntr;
	float b = y_center - y_cntr;
	float i = sqrt(a * a + b * b);
	return i - radius - r <= 0;
}

