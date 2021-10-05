#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* jack_bauer - prints every minute
*
*
* Return: void returns nothing.
*/
void jack_bauer(void)
{
int i;
int j;
for (i = 0; i < 24 ; i++)
{
for (j = 0; j < 60; j++)
{
if (i < 10)
{
putchar('0');
}
printf("%d", i);
putchar(':');
if (j < 10)
{
putchar('0');
}
printf("%d", j);
putchar('\n');
}
}
}
