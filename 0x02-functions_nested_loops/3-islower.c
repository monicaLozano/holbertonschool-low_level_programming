#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print alphabet lowecase
* _islower - checks for lowercase character.
* @c: character
* Return: always zero
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
