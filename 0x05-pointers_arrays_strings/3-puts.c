#include <stdio.h>
#include "main.h"

/**
 * _puts - print a string followed by a new line to
 * standard output
 *
 * @str: string to be printed
 *
 * Return: return string with new line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
	}
	_putchar('\n');
}
