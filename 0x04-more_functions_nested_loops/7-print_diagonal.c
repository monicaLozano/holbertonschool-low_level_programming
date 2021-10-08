#include "main.h"
/**
* print_diagonal - draws a diagonal line on the terminal.
* @n: If n is 0 or less, the function should only print a \n
*
* Return: a diagonal
*/
void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0 ; a < n ; a++)
		{
			for (b = 0 ; b < a ; b++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
