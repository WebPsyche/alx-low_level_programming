#include "main.h"
/**
 * _isalpha - check for alphabetic characters.
 *
 * @c: letter to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 if otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' || c >= 'A') && (c <= 'z' || c <= 'Z'));
}
