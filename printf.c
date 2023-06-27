#include "main.h"
#include <string.h>
/**
 * _printf - matches output according to a format.
 * @format: the format
 * Return: the number of characters printed excluding the null character
 */
int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					len += print_char(va_arg(args, int));
					break;
				case 's':
					len += print_str(va_arg(args, char *));
					break;
				case '%':
					len += print_37(va_arg(args, int));
					break;
				case 'd':
				case 'i':
					len += print_int(va_arg(args, int));
					break;
				default:
					_putchar('%');
					_putchar(*format);
					len += 2;
					break;
			}
		}
		else
		{
			_putchar(*format);
			len++;
		}
		format++;
	}
	return (len);
}
