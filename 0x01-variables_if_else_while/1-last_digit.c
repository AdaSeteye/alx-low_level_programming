#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main block
 * Description: get a random number and print the last digit
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lsd;
	lsd=n%10;
	if (lsd > 5)
		printf("Last digit of %d is %d and is greater than 5", n, lsd);
	else if (lsd == 0)
		printf("Last digit of %d is %d and is 0", n, lsd);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0", n, lsd);
		        
		return (0);
}
