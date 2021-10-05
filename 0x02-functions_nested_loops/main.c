#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print alphabet lowecase
*
* Return: always zero
*/
void print_alphabet(void);
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
{
_putchar(i);
}
_putchar('\n');
return (0);
}
