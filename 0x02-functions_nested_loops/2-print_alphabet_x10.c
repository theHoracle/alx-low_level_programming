#include <stdio.h>
/**
 * print_alphabet_x10 - Entry point
 * print alphabets 10x
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}

		putchar('\n');
		i++;
	}
}
