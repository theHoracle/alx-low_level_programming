#include <stdio.h>
/**
 * main - Entry point
 * print all characters of the alphabet
 * Return: 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar("\n");
	return (0);
}
