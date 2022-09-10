#include <stdio.h>
/**
 * main - Entry point
 * print combinations of single digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(num % 10 + '0');
		if (num < 9)
			putchar(',');
			putchar(' ');
	}

	putchar('\n');
	return (0);
}
