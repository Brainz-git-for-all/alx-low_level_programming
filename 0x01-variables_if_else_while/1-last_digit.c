#include <stdio.h>
/**
 *main-The main function
 *Return:always (0)
 */
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int l;
	l = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */


	if (l > 5)
	{
		printf("The last digit 0f %d is %d and is greater than 5\n", n, l);

	}
	else if (l == 0)
	{
		printf("The last digit 0f %d is %d and is 0\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
	printf("%d is %d and is less than 6 and not equal to zero\n", n, l);
	}
	return (0);
}
