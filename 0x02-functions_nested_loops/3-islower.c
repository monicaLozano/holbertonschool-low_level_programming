#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* _islower - checks for lowercase characte
* @c: character
*
* Return: 1 if is lowercase and 0 if is otherwise
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
