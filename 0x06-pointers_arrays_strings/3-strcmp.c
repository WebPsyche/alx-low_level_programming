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
	for (int i = 0; (s1[i] != '\0' && s2[i] != '\0'); i++)
	{
		if (s1[i] > s2[i])
		{
			x = 15;
		}
		else if (s1[i] < s2[i])
		{
			x = -15;
		}
		i++;
	}
	return (x);
}
