#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*
* _islower - checks for lowercase character.
* @c: character
*
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
