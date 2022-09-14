#include "main.h"
/**
 * times_table - prints the 9 time table, starting with 0
 *
 * starting with 0
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if ((z / 10) == 0)
			{
				if (y != 10)
					_putchar(' ');
					_putchar(n + '0');

					if (y == 9)
						continue;
						_putchar(',');
						_putchar(' ');
					}
			else
			{
						_putchar((n / 10) + '0');
						_putchar((n % 10) + '0');
						if (j == 9)
							continue;
							_putchar(',');
							_putchar(' ');
					}
		}
		_putchar('\n');
	}
}
