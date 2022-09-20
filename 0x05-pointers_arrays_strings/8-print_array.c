#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n element of an array of integers,
 * followed by a new line
 *
 * @a: array to be printed
 * @n: number of elements of the array to be printed
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}

