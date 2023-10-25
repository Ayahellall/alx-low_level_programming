#include"main.h"
/**
 * _pow_recursion - func to raised num to power
 * @x: number to be calc
 * @y: power
 * Return: value of powerd num
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else if (y == 0)
	return (1);
else
	return (x * _pow_recursion(x, y - 1));

















}
