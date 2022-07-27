#include "main.h"

/**
 * E - specificer %
 * @arg_add: data of input
 * @buffer: space of storage
 * @count_buffer: count of int
 *
 * Return: void
*/

void E(__attribute__((unused))va_list arg_add, char *buffer, int *count_buffer)
{
	int lent = *count_buffer;

	buffer[lent] = '%';
	lent++;
	*count_buffer = lent;
}
