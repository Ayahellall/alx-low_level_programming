#include"main.h"
/**
 * _isupper - func to check if the char upper case
 * @c: value to be checked
 * Return: will return 1 if upper 0 otherwise
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);
else
return (0);

}
