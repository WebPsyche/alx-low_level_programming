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
	char letter[] = {'A', 'E', 'I', 'O', 'U'};
	int encnum[] = {4, 3, 0, 7, 1};
	int i, x;

	x = 0;
	while (s[x] != '\0')
	{
		for (i = 0; i < letter[i]; i++)
		{
		if (s == key[i] || s == key[i] + 32)
		{
			s = 48 + value[i];
		}
		}
	x++;
	}
	return (s);
}
