#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* _abs - compute the absolute value
* @i: type number
* Return: absolute value of @n
*/
int _abs(int i)
{
if (i < 0)
{
return (i = i * -1);
}
else
{
return (i);
}
}
