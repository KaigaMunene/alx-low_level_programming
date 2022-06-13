#include "main.h"

/**
 * _isupper - Check main
 * @c: An input character
 * Description: function uses _putchar function to print
 * Return: 1 if is uppercase or 0 if is otherwise
 */

int _isupper(int c)
{
char upper;
int letter = 0;

for (upper =  'A'; upper <= 'Z'; upper++)
{
if (c == upper)
letter = 1;
}
return (letter);
}
