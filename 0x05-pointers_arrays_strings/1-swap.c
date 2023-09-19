#include"main.h"
/**
 * swap_int - func to make swap by pointers
 * @a: first value
 * @b: second value
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int swap;
swap = *a;
*a = *b;
*b = swap;



}

