#include"main.h"
/**
 * print_rev - func to print string
 * @s: to be checked
 * Return: nothing
 */
void print_rev(char *s)
{
int i = 0;
while(s[i] != '\0')
{
i++;
}
while(i--)
_putchar(s[i]);

_putchar('\n');

}
