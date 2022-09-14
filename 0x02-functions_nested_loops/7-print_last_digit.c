#include "main.h"
/**
 * print_last_digit - print last digit of a number
 *
 * @n: digit to be printed
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int o;

	if (n < 0)
		n = -n;
			o = n % 10;
			if (o < 0)
				o = -o;
			_putchar(o + '0');

	return (o);
}
