#include"main.h"
#include <stddef.h>
/**
 * _strpbrk -  function locates the first occurrence in the string s
 * @s: string will be scanned
 * @accept: string will be search in
 * Return: with the matches
 */
char *_strpbrk(char *s, char *accept)
{
char *temp;
while (*s != '\0')
{
temp = accept;
while (*temp != '\0')
{
	if (*s == *temp)
{
	return (s);
}
temp++;
}
s++;
}
return (NULL);
}
