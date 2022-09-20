#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 *
 * @a: 1st value to be swaped
 * @b: 2nd value to be swaped
 *
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
