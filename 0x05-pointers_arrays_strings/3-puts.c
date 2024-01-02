#include "main.h"
#include <stdio.h>

/**
 *_puts-prints the characters of a string
 *@str: pointer
 *Return:always zero
 */

void _puts(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i <= length; i++)
	{
		printf("%c", str[i]);
	}

}
