#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description:
 * @argc: the first parameter
 * @argv: the second parameter
 * Return: 0 on SUCCESS
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
