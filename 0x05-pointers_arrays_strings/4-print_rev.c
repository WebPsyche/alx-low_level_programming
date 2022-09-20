#include "main.h"

/**
 * print_rev - prints a string in reverse followed
 * by a new line
 *
 * @s: string to be printed in new line
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int w;

	while (*s != '\0')
	{
		s++;
	}
	w = s - 1;
	for (w--; w >= 0; w--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}

