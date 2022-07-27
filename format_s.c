#include "main.h"

/**
 * format_s - specificer s
 * @arg_add: data of input
 * @buffer: space of storage
 * @count: count of int
 *
 * Return: void
*/

void format_s(va_list arg_add, char *buffer, int *count_buffer)
{
	int i = 0, lent = *count_buffer;
	char *str = NULL;

	str = va_arg(arg_add, char *);
	if  (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		buffer[lent] = str[i];
		lent++, i++;
	}
	*count_buffer = lent;
}
