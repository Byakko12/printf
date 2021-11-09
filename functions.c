#include "main.h"

/**
 * f_char - moves the pointer
 * copying the input char
 *
 * @data_input: Input list
 * @output: pointer to move and reassign
 * Return: void*
 */
void *f_char(va_list data_input, char **output)
{
	char c;

	c = va_arg(data_input, int);

	
	if ( c == '\0' )
	{
		c++;
		
	}
	**output = c;
	(*output)++;
	return (0);
}

/**
 * f_str - moves the pointer
 * copying the input string
 *
 * @data_input: Input list
 * @output: pointer to move and reassign
 * Return: void*
 */
void *f_str(va_list data_input, char **output)
{
	char *s;

	s = va_arg(data_input, char *);
	if (s == NULL)
	{
		s = "(null)";
	}

	while (*s)
	{
		**output = *s;
		(*output)++;
		s++;
	}
	return (0);
}

/**
 * f_int - copy the int arg
 * in to the output
 *
 * @data_input: input integer
 * @output: pointers to output string
 * Return: void*
 */
void *f_int(va_list data_input, char **output)
{
	int i = 0;

	i = va_arg(data_input, int);

	f_intcpy(i, output);

	return (0);
}
/**
 * f_intcpy - moves the pointer
 * to allocate the integer
 *
 * @input: integer to copy
 * @output: char dbl pointer to move
 * Return: void*
 */
void *f_intcpy(int input, char **output)
{
	unsigned int last_digit = 0, reversed = 0, digit = 0;

	if (input < 0)
	{
		**output = '-';
		(*output)++;
		last_digit = ('0' - (input % 10));
		input /= -10;
	}
	else
	{
		last_digit = ((input % 10) + '0');
		input /= 10;
	}
	reversed = 0;
	while (input > 0)
	{
		reversed = (reversed * 10 + (input % 10));
		input /= 10;
	}
	while (reversed > 0)
	{
		digit = ((reversed % 10) + '0');
		**output = digit;
		(*output)++;
		reversed /= 10;
	}
	**output = last_digit;
	(*output)++;

	return (0);
}
