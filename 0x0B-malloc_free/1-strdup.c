#include"main.h"
#include<stddef.h>
#include<stdlib.h>
/**
 * _strdup -  function returns a pointer to a new string
 * @str: string to be duplicated
 * Return: with value
 */

char *_strdup(char *str)
{
char *p;
int s;
int i;
if (str == NULL)
	return (NULL);
for (s = 0; str[s] != '\0'; s++)
{
p = malloc(s * sizeof(*str + 1));
if (p == 0)
	return (NULL);
else
{
	for (i = 0; i < s; i++)
		p[i] = str[i];
}
}
return (p);

}
