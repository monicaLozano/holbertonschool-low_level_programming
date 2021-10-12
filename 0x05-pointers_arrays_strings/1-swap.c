#include "main.h"

/**
* swap_int -  swaps the values of two integers.
* @a: the value chang
* @b: the value chang
* Return: Always 0.
*/

void swap_int(int *a, int *b)
{
	int t;
	t = *b;
	*b = *a;
	*a = t;
}
