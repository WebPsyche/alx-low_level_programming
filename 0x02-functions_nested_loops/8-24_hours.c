#include "main.h"
/**
 * jack_bauer - prints every minutes of the day starting from 00:00 to 23:59
 *
 * @param: no parameter
 *
 * Return: minutes of the day
 */
void jack_bauer(void)
{
	int x;
	int y;

	x = 0;
	while (x < 24)
	{
		y = 0;

		while (y < 60)
		{

		_putchar((x / 10) + '0');
		_putchar((x / 10) + '0');
		_putchar(':');
		_putchar((y / 10) + '0');
		_putchar((y / 10) + '0');
		_putchar('\n');
		y++;

		}
		x++;
	}
}

