#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* 
* print_alphabet_x10 - t prints 10 times the alphabet, in lowercase
* 
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
