#include <stdio.h>
int main (void)
{
	int i,x;

	for (i = 0; i <= 10; i++)
	{
		x = 0;

		while (x < 15)
		{
			if (x >= 10)
				putchar('0' + x / 10);
			putchar('0' + x % 10);
			x++;
		}
		putchar('\n');
	}
}

