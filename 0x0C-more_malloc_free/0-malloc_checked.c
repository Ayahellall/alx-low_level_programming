#include"main.h"
#include<stddef.h>
#include<stdlib.h>
/**
 * malloc_checked - func to allocate
 * @b: size of memory
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
int *p;
p = malloc(b);
if (p == 0)
	exit(98);
return (p);
}
