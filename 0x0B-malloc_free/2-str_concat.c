#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - functions that concatenates two strings
 * @s1: inpute one
 * @s2: inpute two
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int a, ca;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = ca = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[ca] != '\0')
		ca++;
	concat = malloc(sizeof(char) * (a + ca + 1));

	if (concat == NULL)
		return (NULL);
	a = ca = 0;
	while (s1[a] != '\0')
	{
		concat[a] = s1[a];
		a++;
	}

	while (s2[ca] != '\0')
	{
		concat[a] = s2[ca];
		a++, ca++;
	}
	concat[a] = '\0';
	return (concat);
}
