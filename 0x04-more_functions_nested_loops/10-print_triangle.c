#include "main.h"
/**
* print_triangle -  a triangle, followed by a new line.
* @size: calculate
*/

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
		_putchar('\n');
	else
		for (a = 0; a < size; a++)
		{
			for (b = size; b >= a + 2; b--)
				_putchar(' ');
			for (c = 0; c < a + 1; c++)
				_putchar('#');
			_putchar('\n');
		}
}
