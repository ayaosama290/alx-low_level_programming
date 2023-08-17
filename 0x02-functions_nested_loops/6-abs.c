#include "main.h"
/**
 * _abs - 
 *
 * Description:
 *
 * Return:
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (- a + (a * 2));
	}
	else if (a > 0)
	{
		return (a);
	}
	else
	{
		return (0);
	}
	return (0);
}
