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
	int i;

	i = 0;

	while (dest[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
