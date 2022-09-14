#include "main.h"
/**
 *print_alphabet_x10 - print the 10 times the alphabet, in lwc
 *Return : Always return 0
 */
void print_alphabet_x10(void)
{
	char alpha10;
	int i;

	i = 0;
	while (i < 10)
	{
		alpha10 = 'a';
		while (alpha10 <= 'z')
		{
			_putchar(alpha10);
			alpha10++;
		}
		_putchar('\n');
		i++;
	}
}
