#include "main.h"
#include <stdio.h>
/**
 *_isupper - checks whether the given string is upper case
 *@c: the variable
 *Return: true if the isupper
 */
int _isupper(char c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}


}
