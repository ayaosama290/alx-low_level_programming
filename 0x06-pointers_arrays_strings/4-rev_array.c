#include "main.h"
/**
 * reverse_array - reverses array
 *
 * Description: a function that reverses the content of an array
 * @a: the first parameter
 * @n: the second parameter
 */
void reverse_array(int *a, int n)
{
	int ii, jj, tt;

	for (ii = 0, jj = (n - 1); ii < jj; ii++, jj--)
	{
		tt = a[ii];
		a[ii] = a[jj];
		a[jj] = tt;
	}
}
