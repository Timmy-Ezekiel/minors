#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
  *_printf - Produce output according to a format
  *
  * @format: String of character
  * @...: Ellipse (Indefinite Variable)
  *
  * Return: Integer
  *
 **/

int _printf(const char *format, ...)
{
	unsigned int x, total = 0, strlen;
	char *longString;
	char ch;
	va_list list;

	va_start(list, format);
	x = 0;
	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			x++;
			switch (format[x])
			{
				case 'c':
				ch = va_arg(list, int);
				write(1, &ch, sizeof(char));
				total += 1;
				break;
				case 's':
				longString = va_arg(list, char *);
				strlen = _strlength(longString);
				total += strlen;
				write(1, longString, sizeof(longString));
				break;
			}
			x++;
			continue;
		}
		total += 1;
		ch = format[x];
		write(1, &ch, 1);
		x++;
	}
	va_end(list);
	return (total - 1);
}

/**
  *_strlength - returns the length of a string
  *
  * @str: String variable
  *
  *Return: Integer length
  *
 **/

int _strlength(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	return (1 + _strlength(str + 1));
}
