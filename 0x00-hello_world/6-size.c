#include <stdio.h>
/**
 * main - imprimir en C with printf
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char c;
long int l;
long long int ll;
float f;  
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
printf("Size of double: %zu bytes\n", sizeof(doubleType));
printf("Size of char: %zu byte\n", sizeof(charType));
return (0);
}
