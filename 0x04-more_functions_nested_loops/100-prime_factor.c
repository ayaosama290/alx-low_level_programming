#include <stdio.h>
#include <math.h>
/**
 * main - prints prime numbers
 *
 * Description: this function prints all the prime numbers of n
 *
 * Return: 0;
 */
int main(void)
{
	long int n = 612852475143;
	int i;

	while (n % 2 == 0)
	{
		/*printf("%d", 2);*/
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			/*printf("%d", i);*/
			n = n / i;
		}
	}
	if (n > 2)
	{
		printf("%ld", n);
	}
	printf("\n");
	return (0);
}
