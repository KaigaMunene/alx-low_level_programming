#include "main.h"

/**
 * print_alphabet - function to print the alphabet in lowercase
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
