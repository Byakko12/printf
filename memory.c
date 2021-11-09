#include "main.h"
/**
 * calloc - assign an initialized value on mem
 *
 * @nmemb: number of bytes
 * @size: size of type of data
 * Return: void*
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *pointer1;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer1 = malloc(nmemb * size);
	if (pointer1 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		pointer1[i] = 0;
	}

	return (pointer1);
}
