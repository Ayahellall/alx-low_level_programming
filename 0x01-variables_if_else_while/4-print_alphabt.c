#include<stdio.h>
/**
 * main - the entry point
 *
 * Return: zero value always
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch == 'e' || ch == 'q')
{
continue;
}
putchar(ch);

}
putchar('\n');
return (0);
}

