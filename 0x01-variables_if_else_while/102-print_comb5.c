#include <stdio.h>
/**
 * main - prints all possible combination of two-digit numbers
 * return: Always 0 (success)
 */
int main (void)
{
	int i,j;

	for (i=0; i<100; i++)
	{
		for (j=0; j,100; j++)
		{
			if (i<j)
			{
				putchar((i/10)+48);
				putchar((i%10)+48);
				putchar(' ');
				putchar((j/10)+48);
					if (i!=98||j!=99)
			{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
