#include "main.h"
#include <stdio.h>
/**
* rev_string - write a funtion that reverses a string
* @s: funtion
* Return: Always 0.
*/

void rev_string(char *s)
{
	int i, j;
	char str[800];

	i = j = 0;

	while (s[i] != '\0')

	{

		str[i] = s[i];

		i++;

	}
	i--;
	while (i >= 0)
	{
		s[i] = str[j];
		i--;
		j++;
	}
	s[j++] = '\0';
}
