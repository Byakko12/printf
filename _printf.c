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
	int i = 0, lenght = 0;
	char print_output[3000];
	char *buffer = &print_output[0];
	void *(*r)(va_list, char **buffer);

	/*List starts*/
	va_start(data_input, format);

	if (format == NULL)
	{
		return (-1);
	}
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
				buffer--;
				r(data_input, &buffer);
				i++;
			}
		}
	}
	lenght = _strlen(print_output);
	_putchar(print_output, buffer - (char *)print_output);
	printf("%d", lenght);
	va_end(data_input);
	return (lenght);
}

void *(*match(const char *format))(va_list data, char **buffer)
{
	int i = 0;

	/*Function structure declaration*/
	functions_t func_call[] = {
		{"c", f_char},
		{"s", f_str},
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
