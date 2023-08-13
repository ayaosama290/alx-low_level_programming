#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	static const char example[] = "and that piece of art is "\
	"useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(example, sizeof(example) - 1, 1, stdout);
	return (1);
}
