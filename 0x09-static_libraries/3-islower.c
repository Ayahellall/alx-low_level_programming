#include"main.h"
/**
 * _islower - checks foe lower case
 *@c: char to be checked
 * Return: return 1 with lowercase 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);

}
