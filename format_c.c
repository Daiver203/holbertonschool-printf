#include "main.h"

/**
 * format_c - specificer c
 * @arg_add: data of input
 * @copy: space of storage
 * @count: count of int
 *
 * Return: void
*/

void format_c(va_list arg_add, char *buffer, int *count)
{
	int len = *count;

	buffer[len] = va_arg(arg_add, int);
	len++;
	*count = len;
}
