#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of element
 * @size: size of element
 * Return: NULL is size or nmemb == 0.
 *         NULLL if malloc fails.
 *         pointer to memory allocated if succesful
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb = size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; 0 < (nmemb = size); a++)
	{
		*((char *)(ptr) + a) = 0;
	}

	return (ptr);
}
