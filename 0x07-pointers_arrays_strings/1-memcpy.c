#include"main.h"
/**
 * _memcpy - func to copy
 * @dest: memory area copied
 * @src: memory area to be copied
 * @n: num of bytes
 * Return: value of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{

dest[i] = src[i];

}
return (dest);



}
