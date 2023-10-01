#include"main.h"
/**
 * factorial - calculate factorial of num
 * @n: num to be calculated
 * Return: value of factorial
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
