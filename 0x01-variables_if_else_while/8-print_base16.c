#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = '0'; i <= 'f'; i++)
	{
		if ((i >= '0' && i <= '9') || (i >= 'a' && i <= 'f'))
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
