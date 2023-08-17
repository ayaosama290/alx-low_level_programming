#include "main.h"

int _islower(int c)
{
	if (c > 64 && c < 91)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (0);
}
