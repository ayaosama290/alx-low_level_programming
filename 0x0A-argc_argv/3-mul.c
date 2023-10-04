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
	int mul;
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
                printf("%d\n", mul);
                return (0);
	}

}

