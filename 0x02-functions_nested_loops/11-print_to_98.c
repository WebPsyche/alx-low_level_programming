#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural nber from n to 98
 *
 * @n: 1st interger to be printe to 98
 *
 * Return : allbnatural number between n and 98
 */
void print_to_98(int n)
{
	int x;

	if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
			printf("%d ", x);
			putchar(',');
		}
	} else if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
			printf("%d ", x);
			putchar(',');
		}
	}
	putchar("\n");
}
