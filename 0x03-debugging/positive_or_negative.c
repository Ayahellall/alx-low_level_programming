#include"main.h"
/**
 * positive_or_negative - func to show pos or neg
 * @n: value to be checked
 * Return: nothing
 */
void positive_or_negative(int n)
{
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
return;
}


