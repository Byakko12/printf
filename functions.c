#include "main.h"
/**
 * _strlen - lenght of string
 *
 * @s: entry string
 * Return: int
 */
int _strlen(const char *s)
{
	int i = 0;

	for (; *s; i++, s++)
		;
	return (i);
}
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
	**output = c;
	(*output)++;
	return (0);
}
/**
 * _putchar - prints the characters
 *
 * @buff: Entry pointer to print
 * @sizebuff: Size to print
 * Return: printing on screen
 */
int _putchar(char *buff, int sizebuff)
{
	return (write(1, buff, sizebuff));
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
