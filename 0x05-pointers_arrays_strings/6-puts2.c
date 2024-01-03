#include "main.h"
#include <stdio.h>

/**
 *puts2- This function prints a given string
 *@str: pointers
 *Return: return zero
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
