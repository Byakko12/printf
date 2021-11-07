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
	char *print_output;
	/*Function structure declaration*/
	functions_t func_call[] = {
	    {"c", f_char},
	    /*{"s", f_str},*/
	    {NULL, NULL}};

	/*List starts*/
	va_start(data_input, format);

	if(format == NULL)
	{
		return(-1);
	}
	i = index_func(format);
	
	print_output = malloc(sizeof(char) * i + 1);
	if (print_output == NULL)
	{
		exit(0);
	}

	print_output = f_strcpy(format, print_output, i);
	for (; format && format[i]; i++, j++)
	{
		
		if (format[i] == '%')
		{
			if (format[i + 1] == func_call[j].form_char[0])
			{

				func_call[j].f(data_input, print_output, i);
			}
		}
	}
	va_end(data_input);
	for (k = 0; print_output[k]; k++)
	{
		_putchar(print_output[k]);
	}
	free(print_output);
	return (0);
}
