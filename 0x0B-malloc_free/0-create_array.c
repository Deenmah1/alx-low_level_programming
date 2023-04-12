#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array -- function that creat an array of chars
 * @size: size of array
 * @c: char
 * Return: pointer to thr array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	for (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
