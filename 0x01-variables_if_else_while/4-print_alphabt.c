#include <stdio.h>

/**
 * main - print aphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		((lowercase == 'q' || lowercase == 'e') != 1)
			putchar(lowercase);
	putchar('\n');
	return (0);
}
