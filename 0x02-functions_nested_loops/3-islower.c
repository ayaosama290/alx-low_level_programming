#include "main.h"

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c == 0)
	{
		return (0);
	}
	return (0);
}
