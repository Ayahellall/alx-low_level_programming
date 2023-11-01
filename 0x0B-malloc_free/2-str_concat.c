#include"main.h"
#include<stddef.h>
#include<stdlib.h>
/**
 * str_concat - func to concatenta 2 string by malloc
 * @s1: string 1
 * @s2: string 2
 * Return: with vallue
 */

char *str_concat(char *s1, char *s2)
{
int i;
int x1, x2;
char *p;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (x1 = 0; s1[x1] != '\0'; x1++)
	;
for (x2 = 0; s2[x2] != '\0'; x2++)
	;
p = malloc(x1 + x2 + 1 * sizeof(char));
if (p == 0)
	return (NULL);
else
for (i = 0; i <= x1 + x2; i++)
{
	if (i < x1)
		p[i] = s1[i];
	else
		p[i] = s2[i - x1];
}
return (p);
}

