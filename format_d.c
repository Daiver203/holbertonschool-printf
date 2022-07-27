#include "main.h"

/**
 * format_d - function that returns an int to signed decimal
 * @valist: arguments passed
 * @buffer: values stored
 * @index: tracks index position
*/

void format_d(va_list arg_add, char *buffer, int *count_buffer)
{
	int i, len = *count_buffer, j = 0;
	char str[200];

	i = va_arg(arg_add, int);
	itos(str, i);
	while (str[j] != '\0'){
		buffer[len] = str[j];
		len++, j++;
	}
	*count_buffer  = len;
}
