#include "main.h"

int _strlen(const char *s)
{
	int i = 0;

	for (; *s; i++, s++)
		;
	return (i);
}

void *f_char(va_list data_input, char **output)
{
	char c;

	c = va_arg(data_input, int);
	printf("%c\n", c);
	**output = c;
	(*output)++;
	return (0);
}

int _putchar(char *buff, int sizebuff)
{
	return (write(1, buff, sizebuff));
}

void *f_str(va_list data_input, char **output)
{
	char *s;

	s = va_arg(data_input, char *);

	while (*s)
	{
		**output = *s;
		(*output)++;
		s++;
	}
	return (0);
}
