#include"main.h"
/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: string to be scanned.
 * @accept: list of characters to match in str
 * Return: Returns the number of bytes in the inital
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; s[i] != accept[j]; j++)
{
if (accept[j] == '\0')
return (i);
}
}
return (i);
}
