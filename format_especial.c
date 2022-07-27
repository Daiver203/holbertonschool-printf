#include "main.h"

/**
 * format_especial - specificer %
 * @arg_add: data of input
 * @buffer: space of storage
 * @count_buffer: count of int
 *
 * Return: void
*/

void format_especial(va_list arg_add, char *buffer, int *count_buffer)
{
	int lent = *count_buffer;

	buffer[lent] = '%';
	lent++;
	*count_buffer = lent;
}
