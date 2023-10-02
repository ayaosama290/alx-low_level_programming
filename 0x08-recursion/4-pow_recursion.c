#include "main.h"
/**
 * _pow_recursion - x power y
 * Description: a function that returns x to the power y
 * @x: the first parameter
 * @y: the second parameter
 * Return: an int
 */
int _pow_recursion(int x, int y)
{
	/* If y is lower than 0, the function should return -1 */
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
