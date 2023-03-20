#include <stdio.h>

/**
 * main - print alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);
	putchar('\n');
	return (0);
}
