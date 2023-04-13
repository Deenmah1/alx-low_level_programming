#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to a newly allocated space
 * @str: char
 * Return: 00
 */

char *_strdup(char *str)
{
	char *iii;
	int j, k = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
		j++;

	iii = malloc(sizeof(char) * (j + 1));

	if (iii == NULL)
		return (NULL);

	for (k = 0; str[k]; k++)
		iii[k] = str[k];

	return (iii);
}
