#include "main.h"
/**
 * factorial - factorial
 * @n: num
 * Return: fact
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n > 1)
	{
		return n * factorial(n - 1)
	}
	return (-1);
}
