#include "main.h"
/**
 * string_toupper - to uppercase
 *
 * Description: a function that changes from lower to upper
 * @str: the only parameter
 *
 * Return: a character
 */
char *string_toupper(char *str)
{
	int ii;

	for (ii = 0; str[ii] != '\0'; ii++)
	{
		if (str[ii] >= 97 && str[ii] <= 122)
		{
			str[ii] = str[ii] - 32;
		}
	}
	return (str);
}
