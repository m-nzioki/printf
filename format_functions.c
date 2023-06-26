#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _putchar - prints out a character
 * @c: the character
 * Return: the character written on stdout
 */

int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * put_str - prints out a string
 * @str: the string
 * Return: the length of the string to be printed
 */

int put_str(char *str)
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

/**
 * put_int - prints out an int
 * @num: the integer
 * Return: the length of the integer
 */

int put_int(int num)
{
	int *digits;
	int i, count = 0;
	int len = 0;

	if (num == 0)
	{
		putchar('0');
		return (1);
	}

	if (num < 0)
	{
		_putchar('-');
		/*Converting the number to a positive */
		num = -num;
		len++;
	}
	i = num;

	/*Counting the number of digits */
	do {
		i /= 10;
		++count;
	}while (i != 0);

	/*Allocating memory to the int*/

	digits = malloc(sizeof(int) * count);

	if (digits == NULL)
		return (len);

	for (i = 0; i < count; i++)
	{
		digits[i] = num % 10;
		num = num / 10;
	}
	while (i > 0)
	{
		_putchar('0' + digits[i - 1]);
		i--;
		len++;
	}

	free(digits);

	return (len);
}

