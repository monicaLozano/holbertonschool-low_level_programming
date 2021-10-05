#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print alphabet lowecase
* _print_alphabet: print alphabet
* Return: always zero
*/
void print_alphabet(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
{
_putchar(i);
}
_putchar('\n');
}
