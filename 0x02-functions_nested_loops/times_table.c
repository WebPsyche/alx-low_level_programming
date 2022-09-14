#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 time table, starting with 0
 *
 * starting with 0
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if ((z / 10) == 0)
			{
				if (y != 0)
					_putchar(' ');
				_putchar(z + '0');

				if (y == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((z / 10) + '0');
				_putcher((z % 10) + '0');

				if (y == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
