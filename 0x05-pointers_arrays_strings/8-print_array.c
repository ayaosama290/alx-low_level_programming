#include "main.h"
/**
 * print_array - prints arrays
 *
 * Description: a usless description that i have to write
 * @a: the first parameter
 * @n: the second parameter
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		printf("\n");
	}
}
