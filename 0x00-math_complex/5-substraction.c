#include "holberton.h"

/**
 * substraction - substracts two complex numbers
 * @c1: componet 1
 * @c2: component 2
 * @c3: result
 */

void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
