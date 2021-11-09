#include "main.h"

/**
 * match - find and return the
 * match format function
 *
 * @format: entry string to find
 * Return: function to found
 */
void *(*match(const char *format))(va_list data, char **buffer)
{
	int i = 0;

	/*Function structure declaration*/
	functions_t func_call[] = {
	    {"c", f_char},
	    {"s", f_str},
	    {"d", f_int},
	    {"i", f_int},
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
