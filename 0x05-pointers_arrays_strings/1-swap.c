#include "main.h"

/**
 *swap_int- swaps two varible a and b
 *@a: first variable
 *@b: second varible
 *Return: returns swaped values
 */

void swap_int(int *a, int *b)
{
	int tijan = *a;
	*a = *b;
	*b = tijan;
}
