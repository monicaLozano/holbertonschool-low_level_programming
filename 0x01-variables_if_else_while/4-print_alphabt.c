#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - prints the alphabeth in lowercase. except q and e
 *
 *
 * Return: always zero.
 */

int main(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
{
if (i != 'e' && i != 'q')
{
putchar(i);
}
putchar('\n');
}
return (0);
}
