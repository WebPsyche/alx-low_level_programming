#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: pointer to string to be encoded
 *
 * Return: encoded string
 */
char *leet(char *s)
{
	char *q = s
	char letter[] = {'A', 'E', 'O', 'T', 'L'};
	int encnum[] = {4, 3, 0, 7, 1};
	int i;

	while (*s)
	{
		for (i = 0; i < sizeof(letter) / sizeof(char); i++)
		{
			if (*s == key[i] || *s == key[i] + 32)
			{
				*s = 48 + encnum[i];
			}
		}
		s++;
	}
	return (q);
}
