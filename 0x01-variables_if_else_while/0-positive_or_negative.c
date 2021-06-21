#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main- displays
*Description: this function determines \
the nature of n
 * more headers goes there
 * betty style doc for function main goes there
 *Return: Always zero
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
