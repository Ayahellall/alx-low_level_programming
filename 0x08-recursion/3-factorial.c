#include"main.h"
/**
 * factorial - func to calc factorial
 * @n: num to be calc
 * Return: with value of fact
 */
int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n == 0)
	return (1);
else
	return (n * factorial(n - 1));

}
