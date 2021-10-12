#include "main.h"
#include <stdio.h>

/**
 * print_array - copies the string pointed to by src
 * followed by a new line.
 * @a: an input array
 * @n: an input integer
 * Return: Nothing
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
