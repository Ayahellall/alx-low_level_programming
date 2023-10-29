#include"main.h"
/**
 * *_memset - func to fill memory with cons bytes
 * @s: memory area
 * @b: cons byte to copy
 * @n: numbof times
 * Return: will be s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
