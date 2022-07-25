#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: takes in format specif
 * Return: count
*/

int _printf(const char *format, ...)
{
	va_list arg_add;
	int count1 = 0, count = 0, i;
	char buffer[2044];
	vtype_t spec[] = {
		{'c', format_c}, {'s', format_s}, {'%', format_especial},
		{'d', format_d}, {'i', format_d}, {'\0', NULL}};
	va_start(arg_add, format);
	if (!format || (format[count1] == '%' && !format[count1 + 1]))
		return (-1);

	while (format[count1])
	{
		if (format[count1] == '%')
		{
			count1++;
			for (i = 0; spec[i].tp != '\0'; i++)
			{
				if (format[count1] == spec[i].tp)
				{
					spec[i].f(arg_add, buffer, &count);
					count1++;
					break;
				} else if (spec[i + 1].tp == '\0')
				{
					count1--;
					buffer[count] = format[count1];
					count++;
				       	count1++;
				}
			}
		} else
		{
			buffer[count] = format[count1];
			count++;
		       	count1++;
		}
	}
	va_end(arg_add);
	write(1, buffer, count);
	return (count);
}
