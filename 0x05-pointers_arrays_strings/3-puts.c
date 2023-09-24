#include"main.h"
/**
 * _puts - func to print string
 * @str: to be checked
 * Return: nothing
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');

}
