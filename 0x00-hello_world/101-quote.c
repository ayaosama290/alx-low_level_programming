#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char ex[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(ex, sizeof(ex) - 1, 1, stdout);
	return (1);
}
