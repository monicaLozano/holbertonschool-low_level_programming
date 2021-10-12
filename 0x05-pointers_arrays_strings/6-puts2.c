#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string, starting with the first
 * character, followed by a new line
 * @str: the string to be printed
 *
 **/

void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i++])
		j++;

	for (i = 0; i < j; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
