#include "main.h"

int _strlen(const char *s)
{
	int i = 0;
	for (; *s; i++, s++)
		;
	return (i);
}

int index_func(const char *input_string)
{
	int i = 0;
	for (; input_string[i]; i++)
	{
		if (input_string[i] == '%')
		{
			return (i);
		}
	}
	return (i);
}

char *f_char(va_list data_input, char *output, int index)
{
	output[index] = va_arg(data_input, int);
	return (output);
}

char *f_strcpy(const char *str, char *output, int index)
{
	int i = 0;

	for (; i < index; i++)
	{
		output[i] = str[i];
	}
	if (str[i] != '%')
		output[i] = str[i];

	return (output);
}
int _putchar(char c)
{
	return(write(1, &c, 1));
}