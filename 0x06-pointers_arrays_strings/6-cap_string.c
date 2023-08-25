#include "main.h"
#include <stdio.h>
/**
 * isLower - determine if lower
 *
 * Description: difh sdahf fhklda fhkd difu gd
 * @c: parameter
 *
 * Return: 1 or 0
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}
/**
 * isDelimiter - determine delimit
 *
 * Description: df ldafh fdskafg afksgf dfagsjkfdggf
 * @c: parameter
 * Return: 1 or 0
 */
int isDelimiter(char c)
{
	int ii;
	char delimiter[] = " \t\n,.!?\"()[}";

	for (ii = 0; ii < 12; ii++)
	{
		if (c == delimiter[ii])
		{
			return (1);
		}
	}
	return (0);
}
/**
 * cap_string - capitalize words
 *
 * Description: a function that capitalize words dkfjkdfh fjdk hfks
 * @s: parameter
 *
 * Return: a character
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int foundDelimit = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			foundDelimit = 1;
		else if (isLower(*s) && foundDelimit)
		{
			*s -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		s++;
	}
	return (ptr);
}
