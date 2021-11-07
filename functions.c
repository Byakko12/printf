#include "main.h"

int _strlen(char *s)
{
	int i = 0;
	for (; *s; i++, s++)
		;
	return(i);

}

int index_func(char *input_string)
{
	int i = 0;
	for (; *input_string; i++)
	{
		if (*input_string == '%')
		{
			return(i);
		}
		input_string++;
	}
	return (0);
}


char * f_char(va_list input, char *output)
{
	
	
	output = input[0]
}

int f_str(va_list input, char *output)
{
	int i = 0;
	while (*s)
	{
		if(*s == '%')
		{
			break;
		}
		f_char(s);
		s++;
		i++;
	}
	return (i);
}