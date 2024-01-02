#include "main.h"
#include <stdio.h>
/**
 *print_rev-this function prints a string reversed
 *@s: pointer
 *Return: returns zero
 */

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

}
