#include "main.h"

/**
 * _isalpha - check for car alphabet
 * @c: the char to be checked
 * Return: 1 if char is letter lower or upper, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'z'))
		return (1);
	else
		return (0);
}
