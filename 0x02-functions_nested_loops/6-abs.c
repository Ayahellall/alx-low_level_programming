#include"main.h"
/**
 * _abs - function to abslute num
 * @x: value to be checked
 * Return: 0 always
 */
int _abs(int x)
{
if (x < 0)
{
int abs_x;
abs_x = x * -1;
return (abs_x);
}
return (x);



}
