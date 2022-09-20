#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string, followed
 * by a line.
 *
 * @str: string to be printed
 *
 * Return: nothimng
 */
void puts_half(char *str)
{
	int i, x, y;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		x = i / 2;
		while (x < i)
		{
			_putchar(str[x]);
			x++;
		}
	}
	else
	{
		y = (i - 1) / 2;
		x = y = 1;
		while (x < i)
		{
			_putchar(str[x]);
			x++;
		}
	}
	_putchar('\n');
}
