#include "main.h"
/**
 * rot13 - encodes strings
 *
 * Description: a function that encodes a string using rot13
 * @s: the first parameter
 *
 * Return: a character
 */
char *rot13(char *s)
{
	int j;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (j = 0; j <= 52; j++)
		{
			if (*s == rot13[j])
			{
				*s = ROT13[j];
				break;
			}
		}
		s++;
	}
	return (ptr);
}
