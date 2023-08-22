#include "main.h"
/**
 * rev_string - reverses string
 *
 * Description: a function taht reverses strings
 * @s: the first parameter
 */
void rev_string(char *s)
{
	int lu, it;
	char temp;

	for (lu = 0; s[lu] != '\0'; ++lu)
	{
		;
	}
	for (it = 0; it < lu 2; i++)
	{
		temp = s[i];
		s[i] = s[lu - 1 - it];
		s[lu - 1 - it] = temp;
	}
}

