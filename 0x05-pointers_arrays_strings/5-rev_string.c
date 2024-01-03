#include "main.h"
/**
 *rev_string-this function prints a string reversed
 *@s: pointer
 *Return: returns zero
 */

void rev_string(char *s)
{
	int length = 0;
	int i;
	
	while (s[length] != '\0')
		length++;
	
	for (i = length - 1; i >= 0; i--)
	{
		s[i];
	}
}
