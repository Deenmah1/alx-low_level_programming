#include <stdio.h>
/**
 * main - print out sizes of data types in C
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %u byte(s)\n", (unsigned char)sizeof(a));
	printf("Size of an int: %u byte(s)\n", (unsigned int)sizeof(b));
	printf("Size of a long int: %u byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %u byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %u byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
