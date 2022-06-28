#include <stdio.h>

/**
 * main: program that multiplies two numbers
 *
 * @argc: argument count
 * @argv: vector of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
int i;

if (argc > 1)
{
printf("Error\n");

return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

return (0);
}
