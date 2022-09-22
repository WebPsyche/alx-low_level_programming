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
	int i, x;

	i = 0;
	while (i < n - 1)
	{
		i++;
	}
	for (x = i; x >= 0; x--)
	{
		_putchar(a[x]);
		if (x != 0)
		{
			_putchar(",");
			_putchar(" ");
		}
	}
	_putchar('\n');
}
