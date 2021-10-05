#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print alphabet lowecase
* print_alphabet_x10: print alphabet
* Return: always zero
*/
void print_alphabet_x10(void)
{
int i = 0;
char c;
while (i < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
i++;
}
}
