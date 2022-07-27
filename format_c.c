#include "main.h"

/**
 * format_c - specificer c
 * @arg_add: data of input
 * @buffer: space of storage
 * @count_buffer: count of int
 *
 * Return: void
*/

void format_c(va_list arg_add, char *buffer, int *count_buffer)
{
	int lent = *count_buffer;

	buffer[lent] = va_arg(arg_add, int);
	lent++;
	*count_buffer = lent;
}
