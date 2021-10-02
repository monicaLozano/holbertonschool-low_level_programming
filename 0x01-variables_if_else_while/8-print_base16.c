#include <stdio.h>
/**
 * main - determina si es numero
 *
(*
* Return: 0
*/
int main(void)
{
char i = 48;
while (i <= 102)
{
if (i <= 57 || (i >= 97 && i <= 102))
{
putchar(i);
}
i++;
}
putchar('\n');
return (0);
}
