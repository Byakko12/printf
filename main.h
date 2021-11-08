#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct functions
{
	char *form_char;
	char *(*f)(va_list, char *, int);
} functions_t;

char *f_char(va_list data_input, char *output, int);
int _printf(const char *format, ...);
char *f_strcpy(const char *str, char *output, int index);
int index_func(const char *input_string);
int _putchar(char c);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *f_str(va_list data_input, char *output, int index);
char *f_strcomp(const char *str, char *output, int index);
int _strlen(const char *s);


#endif /*MAIN_HEADER*/
