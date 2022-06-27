#include "main.h"

/**
 * palindrome_checker - checks the string
 * @str: the string to be checked
 * @len: the length of the string
 * @i: the incrementor, starts at 0
 *
 * Return: 1 if it's a palindrome, 0 if it's not
 */

int palindrome_checker(char *str, int len, int i)
{
if (i < len && str[i] == str[len])
return (palindrome_checker(str, len - 1, i + 1));

if (str[i] != str[len])
return (0);

return (1);
}

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: the string to check the length of
 *
 * Return: an integer that displays the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome else 0
 *
 * @s: string to be checked if it's a palindrome
 *
 * Return: 1 if a string is a palindrome and 0 if not
 */

int is_palindrome(char *s)
{
int i = 0;
int length = _strlen_recursion(s) - 1;

return (palindrome_checker(s, length, i));
}
