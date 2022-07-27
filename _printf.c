#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: takes in format specif
 * Return: count
*/

int _printf(const char *format, ...)
{
	va_list arg_add;
	int count = 0, count_buffer = 0, i;
	char buffer[2048];
	vtype_t spec[] = {{'c', format_c}, {'s', format_s}, {'%', E},
			{'d', format_d}, {'i', format_d}, {'\0', NULL}};
	va_start(arg_add, format);
	if (!format || (format[count] == '%' && !format[count + 1]))
		return (-1);
	while (format[count])
	{
		if (format[count] == '%')
		{	count++;
			for (i = 0; spec[i].tp != '\0'; i++)
			{
				if (format[count] == spec[i].tp)
				{	spec[i].f(arg_add, buffer, &count_buffer);
					count++;
					break;
				} else if (spec[i + 1].tp == '\0')
				{	count--;
					buffer[count_buffer] = format[count];
					count_buffer++, count++;
				}
			}
		} else
		{	buffer[count_buffer] = format[count];
			count_buffer++, count++;
		}
	}
	va_end(arg_add);
	write(1, buffer, count_buffer);
	return (count_buffer);
}
