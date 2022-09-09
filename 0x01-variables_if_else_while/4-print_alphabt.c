#include <stdio.h>
/**
 * main - Entry point
 * print all characters except q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
		ch++;
	}

	putchar('\n');
	return (0);
}
