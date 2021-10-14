#include "main.h"

/**
 *_strcmp - compara carácter por carácter
 *@s1: string one
 *@s2: string two
 *
 *Return: integer j
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	j += s1[i] - s2[i];
	return (j);
}
