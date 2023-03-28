#include "main.h"

/**
 * _strcpy - copies the string pointed to by scr
 * @dest: char type string
 * @scr: char type string
 * Description: Copy the string pointed to by pointer `scr` to
 * the buffer Pointed to by `dest`
 * Return: Pointer to `dest
 */

char *_strcpy(char *dest, char *scr)
{
	int z = -1;

	do {
		z++;
		dest[z] = scr[z];
	} while (scr[z] != '\0');

	return (dest);
}
