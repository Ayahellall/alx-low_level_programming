#include"main.h"
#include<stddef.h>
#include<stdlib.h>
/**
 * string_nconcat - to concatente 2 strings
 * @s1: fisrt string
 * @s2: second string
 * Retuen: with pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int n1, n2;
unsigned int i, j;
char *p;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (n1 = 0; s1[n1] != '\0'; n1++)
	;
for (n2 = 0; s2[n2] != '\0'; n2++)
	;
p = malloc(n1 + n + 1);
	if (p == 0)
		return (NULL);
for (i = 0; s1[i] != '\0'; i++)
	p[i] = s1[i];
for (j = 0; j <= n; j++)
{
	p[i] = s2[j];
	i++;
}
return (p);


}

