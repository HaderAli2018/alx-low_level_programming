#include"main.h"
#include<stdio.h>
/**
 * main - print all arguments
 * @argc : int paramter
 * @argv : char array
 * Return: 1 if success
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s", argv[i]);
printf("\n");
}
return (0);
}
