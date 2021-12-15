#include "holberton.h"

/**
 * argument - calculates the argument of a complex number
 * @c: structure var
 * Return: the argument
 */

double argument(complex c)
{
	double argumento = 0;

	argumento = atan(c.im / c.re);
	return (argumento);
}
