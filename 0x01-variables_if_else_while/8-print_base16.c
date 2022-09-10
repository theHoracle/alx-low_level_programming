#include <stdio.h>
/**
 * main - Entry point
 * prtint all char of the headecimal
 * Return: 0 (Success)
 */
int main(void)
{
	char num, a_f;

	num = 0;
	a_f = 'a';
	while (num < 10)
	{
		putchar(num % 10 + '0');
		num++;
	}

	while (a_f <= 'f')
	{
		putchar(a_f);
		a_f++;
	}

	putchar('\n');
	return (0);
}
