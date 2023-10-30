#include"main.h"
#include<stdio.h>
/**
 * main - main func to print count of arg
 * @argc: count of argument
 * @argv: vector of argument
 * Return: with value
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d \n", argc - 1);
		return (0);
}
