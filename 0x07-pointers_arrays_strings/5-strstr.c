#include"main.h"
#include <stddef.h>
/**
 * _strstr - function finds the first occurrence of the substring needle
 * @haystack: string to be checked
 * @needle: string to be scanned
 * Return: return to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
char *temp;
while (*needle != '\0')
{
temp = haystack;
while (*temp != '\0')
{
	if (*needle == *temp)
{
	return (temp);
}
temp++;
}
needle++;
}
return (NULL);
}
