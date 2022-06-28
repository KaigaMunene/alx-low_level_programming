#include <stdio.h>

/**
 * main - a program that prints its name
 *
 * @argc: number of arguments passed in command line
 * @argv: Array of arguments entered
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
if (argc)
{
printf("%s\n", *argv);
}
return (0);
}
