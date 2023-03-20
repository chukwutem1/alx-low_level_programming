#include <stdio.h>
/**
 * main - print out size of data types in c
 * code by chukwutem1
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu 1byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu 4byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu 8bytes(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu 8byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu 4byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
