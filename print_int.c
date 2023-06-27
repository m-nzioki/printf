#include "main.h"

/**
 * print_int - prints out an int
 * @num: the num to print
 * Return: the number of characters printed
 */

int print_int(int num)
{
	int i;
	int *digits;
	int len = 0, count = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		len++;
	}
	i = num;
	while (i != 0)
	{
		i /= 10;
		count++;
	}
	digits = malloc(sizeof(int) * count);
	if (digits == NULL)
		return (len);

	for (i = 0; i < count; i++)
	{
		digits[i] = num % 10;
		num /= 10;
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
