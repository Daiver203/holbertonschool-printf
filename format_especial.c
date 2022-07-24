#include "main.h"

/**
 * format_especial - specificer %
 * @arg_add: data of input
 * @buffer: space of storage
 * @count: count of int
 * 
 * Return: void
*/

void format_especial(__attribute__((unused)) va_list arg_add, char *buffer, int *count)
{
	int len = *count;

	buffer[len] = '%';
	len++;
	*count = len;
}
