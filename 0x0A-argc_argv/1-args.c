#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments passed into it
 *
 * @argc: numbers of arguments passed 
 * @argv: array of argements passed
 *
 * Return: Always 0 (Success)
 *
 */

int main(int argc, char **argv)
{
(void)argv;
printf("%d\n", argc - 1);

return (0);
}
