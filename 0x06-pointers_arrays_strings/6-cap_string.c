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
	int x;

	char delims[] = "\t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{

		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] = s[0] - 32;
			for (x = 0; delimeters[x] != '\0'; j++)
			{
				if (s[i] == delimeters[x] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
	}
	return (s);
}
