#include "main.h"
/**
 * _sqrt_recursion - entry point
 * @n: find sqrt of int n
 * Return: sqrt
 */
int _square_root(int n, int num);
int _sqrt_recursion(int n)
{
	return (_square_root(n, 1));
}
/**
 * _sqrt - entry point
 * @n: find sqrt of n
 * @num: num of tries
 * Return: sqrt of n
 */
int _square_root(int n, int num)
{
	if (num * num == n)
		return (n);
	else if (num * num < n)
		return (_square_root(n, num + 1));

	return (-1);
}
