#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct vtype
{
	char tp;
	void (*f)(va_list  arg_add, char *buffer, int *count);
} vtype_t

int _printf(const char *format, ...);
void format_c(va_list arg_add, char *buffer, int *count);
void format_s(va_list arg_add, char *buffer, int *count);
void format_especial(va_list arg_add, char *buffer, int *count);
void format_d(va_list arg_add, char *buffer, int *count);
void *itos(char str[], long int n);

#endif /*_MAIN_H_*/
