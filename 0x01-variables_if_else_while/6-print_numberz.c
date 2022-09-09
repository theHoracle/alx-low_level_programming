#include <stdio.h>
/**
 * main - Entry point
 * print numbers using putchar() function
 * Return: 0 (Success)
 */
int main(void)
{
	long int num;

	while (num <  10)
	{
		putchar(num % 10 + '0');
		num++;
	}

	putchar('\n');
	return (0);
}
