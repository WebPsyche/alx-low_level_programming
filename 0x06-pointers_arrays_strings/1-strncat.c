#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: pointer to string
 * @src: string to be appended
 * @n: number of bytes
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	i = 0;
	for (i = 0; i < 100)
