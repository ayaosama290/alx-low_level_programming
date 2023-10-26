#include "main.h"
/**
 * get_endianness - returns endianness
 * Return: an int
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
