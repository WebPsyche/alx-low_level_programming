#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string
 * to uppercase
 *
 * @s: type of char to be transformed
 *
 * Return: uppercase letters
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
}
