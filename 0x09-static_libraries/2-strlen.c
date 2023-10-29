#include"main.h"
/**
 * _strlen - calculate the length of string
 * @s: value to be checked
 * Return: return with value
 */
int _strlen(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
