#include "main.h"
#include <stdio>
/**
 *puts_half- prints half os the string
 *@str: pointer
 *:Return: always zero
 */

void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
		int start_index = (length + 1) / 2;
	}

	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
