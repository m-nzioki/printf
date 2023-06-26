#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to a format.
 * @format - the format
 * Return: the number of characters printed excluding the null character
 */

int _printf(const char *format, ...)
{
	int len;
	va_list args;

	va_start(args, format);
	len = 0;

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(args, int));
					len++;
					break;
				case 's':
					 put_str(va_arg(args, char *));
					 len += len;
					 break;
				case '%':
					 _putchar('%');
					 len++;
					 break;
				case 'd':
				case 'i':
					 put_int(va_arg(args, int));
					 len++;
					 break;
				/*Prints an unrecognized conversion specifer
				 * as a literal string */
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
	va_end(args);
	return len;
}
