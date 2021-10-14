#include "main.h"
/**
 * string_toupper - Devuelve una copia de esta cadena convertida a mayúsculas.
 * @str: the string
 *
 * Return: the string that change for uppercase
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
