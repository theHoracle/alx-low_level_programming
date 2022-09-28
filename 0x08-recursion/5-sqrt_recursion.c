#include "main.h"
/**
 * _sqrt_recursion - entry point
 * @n: find sqrt of int n
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - entry point
 * @n: find sqrt of n
 * @num: num of tries
 * Return: sqrt of n
 */
int _sqrt(int n, int num)
{
	if (num * num)
		return (n);
	else if (num * num < n)
		return (_sqrt(n, num + 1));

	return (-1);
}
