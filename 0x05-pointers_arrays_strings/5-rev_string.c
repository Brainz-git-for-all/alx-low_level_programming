#include "main.h"
/**
 *rev_string-this function prints a string reversed
 *@s: pointer
 *Return: returns zero
 */

void rev_string(char *s)
{
	int temp;
	int length = 0;
	int i;

	while (s[length] != '\0')
		length++;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
