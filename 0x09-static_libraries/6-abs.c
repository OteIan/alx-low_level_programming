#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *
 * @r: integer to be computed
 *
 * Return: absolute value
 */

int _abs(int r)
{
	int a;

	if (r < 0)
		a = -(r);
	else
		a = r;
	return (a);
}
