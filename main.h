#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>



typedef struct functions
{
	char *form_char;
	int (*f)(const char *);
} functions_t;

int f_char(const char *c);
int f_str(const char *c);
int _printf(const char *format, ...);












#endif /*MAIN_HEADER*/