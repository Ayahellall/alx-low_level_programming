#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - main func to maltiply 2 num
 * @argc: count of argument
 * @argv: vector of argument
 * Return: with value
 */
int main(int argc, char *argv[])
{
int x;
int z;
if (argc == 3)
{
	x = atoi(argv[1]);
	z = atoi(argv[2]);
	printf("%d \n", x * z);
}
else
{
	printf("Error\n");
	return (1);
}
return (0);
}
