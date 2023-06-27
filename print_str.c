#include "main.h"

/**
 * print_str - prints out a string
 * @str: the string
 * Return: the length of the string to be printed
 */

int print_str(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		len++;
	}
	return (len);
}
