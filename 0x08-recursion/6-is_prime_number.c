#include"main.h"
/**
 * prime_checker - func to show which is prime
 * @n: num to be checked
 * @i: num to check
 * Return: 1 if prime 0 otherwise
 */
int prime_checker(int n, int i)
{
if (n == i)
	return (1);
else if (n % i == 0)
	return (0);
else

	return (prime_checker(n, i + 1));

}
/**
 * is_prime_number - func to show which is prime
 * @n: num to be checked
 * Return: 1 if prime 0 otherwise
 */
int is_prime_number(int n)
{
if (n < 2)
	return (0);
return (prime_checker(n, 2));

}
