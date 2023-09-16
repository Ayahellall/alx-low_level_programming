#include"main.h"
/*
 * _abs - func to abslute num
 *
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
