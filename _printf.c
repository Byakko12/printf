#include "main.h"

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
	int i = 0, j = 0;
	/*Function structure declaration*/
	functions_t func_call[] = {
	    {"c", f_char},
	    {"s", f_str},
	    {NULL, NULL}};



	/*List starts*/
	va_start(data_input, format);
	
	

	

	for (; format && format[i]; i++, j++)
	{
		
		i = f_str(format);
		if (format[i] == '%')
		{
		if (format[i + 1] == func_call[j].form_char[0])
		{

			func_call[j].f(data_input);
		}
		}
		break;
	}
	va_end(data_input);
	return(0);
}


