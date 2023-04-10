#include <stdio.h>
#include "main.h"
/**
 * main - program that prints number of arguments passed into it
 * @argc: the number of arguments used
 * @argv: array of the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
