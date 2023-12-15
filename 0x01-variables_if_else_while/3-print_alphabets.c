#include <stdio.h>
/**
 *main- functions
 *Return: always zero
 */

int main(void)
{
	char i;
	char z;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (z = 'A'; z < 'Z'; z++)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}
