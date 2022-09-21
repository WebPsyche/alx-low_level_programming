#include "main.h"

/**
 * _strncpy - copiees a string
 *
 * @dest: pointer to string
 * @src: string to be appended
 *
 * Return: copies string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, x;

	i = 0;
	x = 0;
	while(dest[i] != '\0')
	{
		i++;
	}
	while(src[x] != '\0')
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
