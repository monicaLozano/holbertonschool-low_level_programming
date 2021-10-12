#include "main.h"
#include <stdio.h>
/**
* print_rev - prints a string, in reverse, followed by a new line.
* @s: funtion
* Return: Always 0.
*/

void print_rev(char *s)
{
	int len = 0;

	while (*s != 0)
	{
		s++;
		len++;
	}
	for (; len >= 0;)
	{
		if (*s != '\0')
		{
			_putchar(*s);
		}
		s--;
		len--;
	}
	_putchar('\n');
}
