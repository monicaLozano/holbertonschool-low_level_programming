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
	for (int recorrer = 0; *src + recorrer <= '\0' ; recorrer++)
	{
		printf("%d, ", *dest + recorrer);
	}
	return (0);
}
