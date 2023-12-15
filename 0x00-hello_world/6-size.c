#include <stdio.h>
/**
 *main- The main entry point for the program
 *Return: always zero
 */
int main(void)
{
	int j;
	char i;
	long  int t;
	long long int v;
	float f;

	printf("Size of a char: %d byte(s)\n", sizeof(i));
	printf("Size of an int: %d byte(s)\n", sizeof(j));
	printf("Size of a long int: %d byte(s)\n", sizeof(t));
	printf("Size of a long long int: %d byte(s)\n", sizeof(v));
	printf("Size of a float: %d byte(s)\n", sizeof(f));

	printf("the best fit size");
	return (0);

}
