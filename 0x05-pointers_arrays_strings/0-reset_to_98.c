#include "main.h"
#include <stdio.h>
/**
 *reset_to_98- this funtion points to 98
 *@n: is the pointer
 *Return: the pointer as 98
 */

void reset_to_98(int *n)
{
	int p = 98;
	n = &p;
}
