#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: 1st string to be compared
 * @s2: 2nd string to be compared
 *
 * Return: result
 */
int _strcmp(char *s1, char *s2)
{
	while (s1 != '\0' && s2 != '\0')
	{
		int x;

		if (s1 != s2)
		{
			x = 15;
			return (x);
		}
		else if (s1 < s2)
		{
			x = -15;
			return (x);
		}
		else
		{
			x = 0;
			return (x);
		}
	}
}
