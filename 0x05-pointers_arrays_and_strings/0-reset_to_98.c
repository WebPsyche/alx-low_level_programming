#include <stdio.h>

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates the
 * value it points to to 98
 *
 * @n: parameter to be updated
 *
 * Return: no return
 */
void reset_to_98(int *n)
{
	int *p;

	p = &n;
	*p = 98;
}
