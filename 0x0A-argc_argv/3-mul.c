#include <stdio.h>
/**
 * main - does multiplicatio of args
 * @argc: arg count
 * @argv: arg vext
 * Return: 0
 */
int main(int argc, int argv[])
{
	int mul;

	(void)argc;
	if (argv[1])
	{
		mul = argv[0] * argv[1];
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
