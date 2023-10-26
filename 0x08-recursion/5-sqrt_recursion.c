#include"main.h"
/**
 * compar - func to compare the num with his sqrt
 * @c: number to be squared to compared with the given num
 * @g: given num to checked
 * Return: value of sqrt
 */
int compar(int c, int g)
{
if (c * c == g)
	return (c);
else if (c * c > g)
	return (-1);
else
	return (compar(c + 1, g));


}


/**
 * _sqrt_recursion - func to calc square root
 * @n: num to check for sqrt
 * Return: with value of sqrt
 */
int _sqrt_recursion(int n)
{
return (compar(1, n));



}
