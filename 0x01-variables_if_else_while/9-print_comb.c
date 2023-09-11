#include<stdio.h>
/**
 * main - the entry point
 *
 * Return: zero value always
 */
int main(void)
{
int i;
for (i = 0 ; i <= 9 ; i++)
{
putchar(i + '0');
if (i == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');

return (0);
}
