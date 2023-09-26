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
char *temp1;
char *temp2;
temp2 = needle;
while (*temp2 != '\0')
{
temp1 = haystack;
while (*temp1 != '\0')
{
	if (*temp1 == *temp2)
{
	return (temp1);
}
temp1++;
}
temp2++;
}
return (NULL);
}
