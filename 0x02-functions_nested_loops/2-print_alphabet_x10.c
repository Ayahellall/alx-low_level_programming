#include"main.h"
/**
 * print_alphabet_x10 - function to print alphabet
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
char ch;
int i;
for (i = 0 ; i < 10 ; i++)
{
_putchar('\n');
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
}
}
