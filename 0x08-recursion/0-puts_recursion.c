#include"main.h"
/**
 * _puts_recursion - func to print string
 * @s :point to char to print
 * Return: nothing
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
	_putchar('\n');
}
_putchar(*s);
_puts_recursion(s + 1);






}
