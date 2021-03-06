#include "holberton.h"

/**
 * conjugate - makes the conjugate of a complex number
 * represented by two doubles
 * @c: structure var
 * Return: the conjugate
 */

complex conjugate(complex c)
{
	if (c.im == 0)
		return (c);
	else
	{
		c.im = -c.im;
		return (c);
	}
}
