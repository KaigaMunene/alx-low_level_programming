#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 * Return: 0 if little endian, 1 if big endian
 */

int get_endianness(void)
{
int n = 1;
char *c = (char *)&n;
return (*c);
}
