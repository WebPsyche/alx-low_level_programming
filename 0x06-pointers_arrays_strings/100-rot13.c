#include "main.h"

/**
 * encodes - a string using rot13
 *
 * @s: pointer to string to be encoded
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i;

	char rt_13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHILKLMNOPQRSTUVWXYZ";
	char tr_13[] = "hijklmnoabcdefgpqrstuvwxyzPQRSTUVWIJKLMNOABCDEFGHXYZ";
	char *str = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == rt_13[i])
			{
				*s = tr_13[i];
				break;
			}
		}
		s++;
	}
	return (str)
}
