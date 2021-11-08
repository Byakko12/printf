#ifndef MAIN_HEADER
#define MAIN_HEADER
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct functions
{
	char *form_char;
	void *(*f)(va_list, char **buffer);
} functions_t;
void *(*match(const char *format))(va_list data, char **buffer);
void *f_char(va_list data_input, char **output);
int _printf(const char *format, ...);
char *f_strcpy(const char *str, char *output, int index);
int index_func(const char *input_string);
int _putchar(char *buff, int sizebuff);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *f_str(va_list data_input, char **output);
char *f_strcomp(const char *str, char *output, int index);
int _strlen(const char *s);


#endif /*MAIN_HEADER*/
