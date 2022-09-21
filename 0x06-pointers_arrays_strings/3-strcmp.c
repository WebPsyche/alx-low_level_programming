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
	int i, q;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	q = s1[i] - s2[i];
	return (q);
}
