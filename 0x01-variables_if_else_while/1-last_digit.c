#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - positive, negative or zero
 *
 *
 * Return: always zero.
 */

int main(void)
{
	int a;

	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;

	printf("Last digit of %d ", a);
	printf("is %d ", b);
	if (b == 0)
	printf("and is 0\n");
	else if (b < 6)
	printf("and is less than 6 and not 0\n");
	else if (b > 5)
	printf("and is greater than 5\n");

	return (0);
}
