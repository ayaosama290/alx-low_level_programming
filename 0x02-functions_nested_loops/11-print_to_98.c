#include "main.h"
/**
 * print_to_98 - prints numbers till 98
 *
 * Description: 'this is a function that takes a no and count till
 * 98'
 * @n: the parameter that holds the starting number
 *
 */
void print_to_98(int n)
{
	while (n != 98)
	{
        	for (;n < -9 && n >= -99; n++)
        	{
            	   int neg = -1 * n;
           	   putchar('-');
            	   putchar((neg / 10) + 48);
            	   putchar((neg % 10) + 48);
            	   neg = -1 * n;
            	   putchar(',');
            	   putchar(' ');
        	}
        	for (; n < -99; n++)
        	{
	
        	    int neg = -1 * n;
           	    putchar('-');
            	    putchar((neg / 100) + 48);
            	    putchar(((neg / 10) % 10) + 48);
            	    putchar((neg % 10) + 48);
                    neg = -1 * n;
                    putchar(',');
                    putchar(' ');

        	}
        	for (;n < 0 && n >= -9; n++)
        	{
            	   int neg = -1 * n;
            	   putchar('-');
           	   putchar((neg % 10) +48);
            	   neg = -1 * n;
           	   putchar(',');
            	   putchar(' ');
       		 }
        	for (; n > 98; n--)
        	{
               	   if (n > 99)
                   {
                	putchar((n / 100) +48);
                	putchar(((n / 10) % 10) + 48);
               		putchar((n % 10) + 48);
                	putchar(',');
               	        putchar(' ');
            	   }
                   else
               	   {
                       putchar((n / 10) + 48);
                       putchar((n % 10) + 48);
                       putchar(',');
                       putchar(' ');
            	   }

        	}
        	for (; n >= 10 && n < 98; n++)
        	{
            	    putchar((n / 10) + 48);
                    putchar((n % 10) + 48);
                    putchar(',');
                    putchar(' ');
                }
       	        for (; n >= 0 && n <= 9; n++)
        	{
            	    putchar((n % 10) + 48);
                    putchar(',');
                    putchar(' ');
        	}
    }
    putchar(9 + '0');
    putchar(8 + '0');
    putchar('\n');
}
