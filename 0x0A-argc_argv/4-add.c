#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description:
 * @argc: the first parameter
 * @argv: the second parameter
 * Return: 0 on SUCCESS and 1 on failure
 */
int main(int argc, char *argv[])
{
	char *c;
	int sum = 0;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
