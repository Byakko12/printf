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
	va_list data_input;
	unsigned int i = 0;
	char *print_output, *buffer;
	void *(*r)(va_list, char **buffer);

	print_output = _calloc(3000, sizeof(char));
	if (print_output == NULL)
		return (-1);
	buffer = &print_output[0];
	va_start(data_input, format);
	if (format == NULL)
		return (-1);
	if (va_arg(data_input, int) == '\0')
	{
		return (1);
	}
	for (; format && format[i]; i++)
	{
		*buffer = format[i];
		buffer++;
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				free(print_output);
				return (-1);
			}
			r = match(format + i + 1);
			if (r == NULL)
			{
				if (format[i + 1] == '%')
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
	i = _strlen(print_output);
	_putchar(print_output, buffer - (char *)print_output);
	va_end(data_input);
	free(print_output);
	return (i);
}
