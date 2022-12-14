#include "main.h"
/**
 * print_triangle -  print a triangle followed by a new line
 *
 * @size: size of the triangle
 *
 * Return : 0
 */
void print_triangle(int size)
{
	int i, x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (x = 1; x <= (size - i); x++)
			{
				_putchar(' ');
			}
			for (y = 1; y <= i; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
