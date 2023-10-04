#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: the main function using argc and argv
 * @argc: the first parameter
 * @argv: the second parameter
 * Return: 0 on SUCCESS
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
