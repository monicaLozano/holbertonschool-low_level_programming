#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * followed by a new line.
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 * Return: Nothing
 */
char *_strcpy(char *dest, char *src)
{
	int control = 0;

	int temp;

	char *aux = dest;

	for (temp = 0; *src + temp <= '\0'; temp++)
	{
		if (*src + temp > '\0')
		{
			control = 1;
		}
		if (control == 0)
		{
			*dest++ = *src++;
		}
	}
	return (aux);
}
