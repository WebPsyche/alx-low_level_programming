#include "main.h"

/**
 * print_alphabet - prints the alphabets in lwc,and a new line at the end
 *
 */
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
