#include"main.h"
#include<stdio.h>
/**
 * main - main func to print names of arg
 * @argc: count of argument
 * @argv: vector of argument
 * Return: with value
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}
