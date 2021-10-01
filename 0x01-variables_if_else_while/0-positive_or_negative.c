#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
printf("Enter a number: \n");
scanf("%d", &num);
if (num > 0)
printf("%d is a positive number \n", num);
else if (num < 0)
printf("%d is a negative number \n", num);
else
printf("0 is neither positive nor negative");
return (0);
}
