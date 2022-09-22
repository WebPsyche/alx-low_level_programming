#include "main.h"

/**
 * cap_string - capitalize all words of a string
 *
 * @s: pointer to the parameter
 *
 * Return: capitalised word
 */
char *cap_string(char *s)
{
	int i;
	char delims[] = "\t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		int x;

		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] -= 32;
			for (x = 0; delims[x] != '\0'; x++)
			{
				if (s[i] == delims[x] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
