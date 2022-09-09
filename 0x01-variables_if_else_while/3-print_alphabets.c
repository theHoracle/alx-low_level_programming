#include <stdio.h>
/**
 * main - Entry point
 * Print lower case alphabets followed by upper case
 * Return: 0 (Success)
 */
int main(void)
{
	char lw_case, up_case;

	lw_case = 'a';
	up_case = 'A';
	while (lw_case <= 'z')
	{
		putchar(lw_case);
		lw_case++;
	}
	while (up_case <= 'Z')
	{
		putchar(up_case);
		up_case++;
	}

	putchar('\n');
	return (0);
}
