#include"main.h"
/**
 * _strlen_recursion - func to count length of string
 * @s: string to calculated
 * Return: with back with length
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
	return (0);
else
	return (1 + _strlen_recursion(s + 1));




















}
