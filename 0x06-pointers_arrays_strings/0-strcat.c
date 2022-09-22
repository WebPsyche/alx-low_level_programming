#include <stdio.h>
#include "main.h"
/**
 * _strcat - contatenates two strings
 *
 * @dest: string to be overwritten
 * @src: string to be appended
 *
 * Return: a ponter to the reusulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, x;

	x = 0;
	for (i = 0; dest[i] != '\0'; i++)
	while (src[x] != '\0')
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
