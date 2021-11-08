#include "main.h"
#include <stdio.h>

/**
 * _printf - Prints any type of data based
 * on format.
 *
 * @format: Format to print (int, double, char, string, ...)
 * Return: int
 */

int _printf(const char *format, ...)
{
	/*List & Vars Inicialization*/
	va_list data_input;
	int i = 0, j = 0, k = 0;
	char print_output[3000];
	char *buffer = &print_output[0];
	void *(*r)(va_list, char **buffer);

	/*List starts*/
	va_start(data_input, format);

	if (format == NULL)
	{
		return (-1);
	}
	/*i = index_func(format);*/

	/*print_output = malloc(sizeof(char) * _strlen(format) + 1);
	if (print_output == NULL)
	{
		exit(0);
	}*/

	/*print_output = f_strcpy(format, print_output, i);*/
	for (; format && format[i]; i++)
	{
		*buffer = format[i];
		buffer++;
		if (format[i] == '%')
		{
			r = match(format + i + 1);
			if (r == NULL)
			{
				i++;
				continue;
			}
			else
			{
				r(data_input, &buffer);
				i++;
			}
			/*if (format[i + 1] == func_call[j].form_char[0])
			{
				func_call[j].f(data_input, print_output, i);
				print_output = f_strcomp(format, print_output, i);
			}*/
		}
	}

	_putchar(print_output, buffer - (char *)print_output);
	/*for (k = 0; print_output[k]; k++, i++)
	{
		_putchar(print_output[k]);
	}*/
	va_end(data_input);

	/*free(print_output);*/
	return (0);
}

void *(*match(const char *format))(va_list data, char **buffer)
{
	int i = 0;

	/*Function structure declaration*/
	functions_t func_call[] = {
		{"c", f_char},
	/*	{"s", f_str},*/
		{NULL, NULL}};
	while (func_call[i].form_char != NULL)
	{
		if (*format == *(func_call[i].form_char))
		{
			break;
		}
		i++;
	}
	return (func_call[i].f);
}