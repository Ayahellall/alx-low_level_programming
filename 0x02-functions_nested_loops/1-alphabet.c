#include<stdio.h>
/**
 * print_alphabet - function to print alphabet
 * main - entry point 
 *
 * Return: zero value always
 */

void print_alphabet(void);
{
char ch;
for (ch = 'a' ; ch = 'z' ; ch++)
{
putchar(ch);
}
}
int main(void)
{
print_alphabet();
putchar('\n');

return (0);
}
