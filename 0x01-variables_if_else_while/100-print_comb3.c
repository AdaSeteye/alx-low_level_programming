#include <stdio.h>
/**
 *main - main block
 *Description: it computes what is required
 *Return: 0
 */
int main(void) 
{
	int i, j;
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
	        {
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8)
			{
				putchar(',');
			}
			putchar(' ');
			
		}
	}				       
	return (0);
}
