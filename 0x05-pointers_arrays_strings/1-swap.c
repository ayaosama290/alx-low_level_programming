#include "main.h"
/**
 * swap_int - swaps numbers
 *
 * Description: a function that swaps numbers a and b
 * @a: the first parameter
 * @b: the second parameter
 */
void swap_int(int *a,int *b)
{
	int holder;
	holder = *a;
	*a = *b;
	*b = holder;
}
