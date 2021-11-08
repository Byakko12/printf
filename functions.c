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

void *f_char(va_list data_input, char **output)
{
	char c;

	c = va_arg(data_input, int);
	printf("%c\n", c);
	**output = c;
	(*output)++;
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
char *f_strcomp(const char *str, char *output, int index)
{
	char temp;

	for (; str[index]; index++)
	{
		temp = str[index + 2];
		output[index + 1] = temp;
	}

	return (output);
}
int _putchar(char *buff, int sizebuff)
{
	return (write(1, buff, sizebuff));
}
/*
char *f_str(va_list data_input, char *output)
{
	unsigned int i = 0, j = 0;
	char *temp = va_arg(data_input, char *);

	j = _strlen(temp) + index;

	_realloc(output, index, j);

	for (; temp[i]; i++, index++)
	{
		output[index] = temp[i];
	}
	return (output);
}*/
