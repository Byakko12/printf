#include "main.h"




void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2;
	unsigned int i = 0;


	if (ptr == NULL)
	{
		free(ptr);
		return (malloc(new_size));
	}

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size < new_size)
	{
		for (i = 0; i < old_size; i++)
		{
			*(ptr2 + i) = *((char *)ptr + i);
		}
	}
	free(ptr);

	return (ptr2);
}
