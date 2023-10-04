#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: a function that returns the number of entered arguments
 * @argc: the first parameter
 * @argv: the second parameter
 * Return: 0 on SUCCESS
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return 0;
}
