#include "main.h"
/**
 * _pow_recursion - entry point
 * @x: int
 * @y: power
 * Return: int of power
 */
int _pow_recursion(int x, int y)
{
	if (y == 1)
		return (x);
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		return (x * _pow_recursion(x, y - 1));
	}

	return (-1);
}
