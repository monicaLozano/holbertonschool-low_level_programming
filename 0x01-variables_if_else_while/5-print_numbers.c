#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main -prints all single digit numbers of base 10 starting from 0, followed by a new line.
 * 
(*
* Return: 0 on success
*/
int main(void)
{
char i;
for (i = '0' ; i <= '9' ; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
