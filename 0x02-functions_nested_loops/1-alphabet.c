#include "main.h"
/**
 * print_alphabet - Entry point
 * call func
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
}
