#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -  random number to the variable n each time it is executed.
* last_digit.c: In function ‘main’
* Return: always zero
*/
int main(void)
{
int n;
srand(time(0));
}
n = rand() - RAND_MAX / 2;
printf("%s %d is %d and is", last, n, n % 10);
if (n % 10 > 5)
{
printf("greater than 5\n");
}
else if (n % 10 == 0)
{
printf("0\n");
}
else
{
printf("less than 6 and not 0\n");
}
return (0);
}
