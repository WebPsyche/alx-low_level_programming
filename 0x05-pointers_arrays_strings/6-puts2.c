#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * starting, starting with first character, followed
 * by a new line
 *
 * @str: string to be printed
 *
 * Return: none
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i]!= '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
