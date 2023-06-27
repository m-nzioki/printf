#include "main.h"

/**
 * _putchar - prints out a character
 * @c: the character
 * Return: the character written on stdout
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
