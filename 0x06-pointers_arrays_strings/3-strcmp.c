#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: 1st string to be compared
 * @s2: 2nd string to be compared
 *
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
	int i, x;

	i = 0;
	x = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			x = 1;
		}
		i++;
	}
	if (x == 0)
		return (0);
	else if (x == 1)
		return (15);
	else
		return (-15);
}
