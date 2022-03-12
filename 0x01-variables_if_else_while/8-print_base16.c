nclude <stdio.h>
/**
 *main - main block
 *Description: prints the alphabets
 *Return: 0
 */
int main(void)
{
	char x;
	        
	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
