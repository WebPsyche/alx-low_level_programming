#include "main.h"
/**
 * more numbers - prints 10 times the numbers, from 0 - 14 
 *
 * folllowed by anew line
 */
void more_numbers(void)
{
	int i,x;

	for (i = 0; i <= 10; i++)
	{
		x = 0;
		while (x < 15)
		{
			if (x >=10)
				_putchar('0' + x / 10);
			_putchar('0' + x % 10);
			x++;
		}
		_putchar('\n');
	}
}


