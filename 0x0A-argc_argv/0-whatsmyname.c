#include "main.h"
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (Always)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; argv[0][i] != '\0'; i++)
	{
		_putchar(argv[0][i]);
	}

	_putchar('\n');
	return (0);
}
