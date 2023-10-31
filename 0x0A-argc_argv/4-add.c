#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * main - main func to add pos num
 * @argc: count of argument
 * @argv: vector of argument
 * Return: with value
 */
int main(int argc, char *argv[])
{
int i;
int sum = 0;
char *p;
if (argc == 1)
	printf("%d\n", 0);
else if (argc > 1)
{
	for (i = 1; i < argc; i++)
	{
		p = argv[i];
		while (*p != 0)
		{
			if (*p < 48 || *p > 57)
			{
				printf("Error\n");
				return (1);
			}
			p++;
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
}
return (0);
}
