#include "holberton.h"

/**
 * display_complex_number - structure “complex” where a complex number a + ib is
 * represented by two doubles
 * @c: structure var
 */

void display_complex_number(complex c)
{
	if (c.re == 0 && c.im == 0)
		exit(0);
	if (c.re != 0 && c.im == 0)
		printf("%f\n", c.re);
	if (c.re == 0 && c.im != 0)
	{
		if (c.im == 1)
			printf("i\n");
		if (c.im == -1)
			printf("0 - i\n");
		else
			printf("%f\n", c.im);
	}
	if (c.re != 0 && c.im != 0)
	{
		if (c.im >= 0 && c.im != 1)
			printf("%f + %fi\n", c.re, c.im);
		if (c.im == 1)
			printf("%f + i\n", c.re);
		if (c.im < 0)
		{
			c.im = -c.im;
			if (c.im == 1)
				printf("%f - i\n", c.re);
			else
				printf("%f - %fi\n", c.re, c.im);
		}
	}
}
