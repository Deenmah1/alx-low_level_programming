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
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size = nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size = nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
