#include "main.h"
#include <stdio.h>
/**
 *print_number - print the numbers zero to nine
 *Return: 0 - 9
 */

void print_number(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
