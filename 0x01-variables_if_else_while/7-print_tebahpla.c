#include <stdio.h>
/**
 * main - Entry point
 * print letters of the alphabets in reverse
 * Return: 0 (Success)
 */
int mian(void)
{
	char rev;

	rev = 'z';
	while (rev >= 'a')
	{
		putchar(rev);
		rev--;
	}

	putchar('\n');
	return (0);
}
