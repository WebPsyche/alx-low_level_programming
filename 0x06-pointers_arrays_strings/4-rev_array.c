#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers
 *
 * @a: pointer to integer
 * @n: 2nd int number
 */

void reverse_array(int *a, int n)
{
	int i;
	int x;
	int tp;

	i = 0;
	x = n - 1;
	while (i < x)
	{
		tp = a[i];
		a[i] = a[x];
		a[j] = tp;
		i++;
		j++;
	}
}
