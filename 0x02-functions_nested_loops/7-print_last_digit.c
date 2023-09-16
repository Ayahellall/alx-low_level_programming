#include"main.h"
/**
 * print_last_digit - func to print last num
 * @x: value to be checked
 * Return: return last digit
 */
int print_last_digit(int x)
{
int last_digit;
last_digit = x % 10;
if (x < 0)
{
last_digit = last_digit * -1;
}
_putchar(last_digit + '0');
return (last_digit);


}

