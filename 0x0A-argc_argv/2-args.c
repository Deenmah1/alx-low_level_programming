#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments it receives
 * @argc: arguments count
 * @argv: the array of argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}
