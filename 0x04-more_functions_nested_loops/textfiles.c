#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 *
 * @n: number of lines to be printed
 *
 * Return: void
 */
void main(void)
{
	int i, x, n;

	n = 10;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (x = 0; x < i; x++)
			{
				putchar(' ');
			}
			putchar(92);
			putchar('\n');
		}
	}
}
