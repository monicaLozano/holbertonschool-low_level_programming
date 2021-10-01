#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;

	printf("Last digit of %d ", n);
	printf("is %d ", m);
	if (m == 0)
	printf("and is 0\n");
	else if (m < 6)
	printf("and is less than 6 and not 0\n");
	else if (m > 5)
	printf("and is greater than 5\n");
	return (0);
}
