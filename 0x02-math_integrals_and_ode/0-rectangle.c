#include "rectangle.h"

/**
 * rectangle_method - emulates teh rectangle method of calc
 * @a: initial value
 * @b: final value
 *Return: area
 */

double rectangle_method(double a, double b, int steps)
{

	float delta = ((b - a) / steps), area = 0;

	for (; a <= b; a = (a + delta))
	{
		area = area + ((1 / (1 + a * a)) * delta);
		printf("valor de area: %.9f\n", area);
	}



	return (area);
}
