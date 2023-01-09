#include"main.h"
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main -  print multiple number
 * @argc: int paramter
 * @argv: char paramter
 * Return: 1 if success
 */
int main(int argc, char *argv[])
{
int mult = 1;

if (argc < 2)
{
printf("Error\n");
return (1);
}
else
{
mult = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mult);
return (0);
}
}
