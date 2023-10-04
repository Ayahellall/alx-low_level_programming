#include"main.h"
#include<stddef.h>
#include <stdlib.h>
/**
 * create_array - func to creat array with size
 * @size: size of array it will be allocate
 * @c: type of data in array
 * Return: with the array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p;
if (size == 0)
	return (NULL);

p = malloc(size * sizeof(char));
if (p == 0)
	return (NULL);
for (i = 0; i < size; i++)
	p[i] = c;
return (p);






}
