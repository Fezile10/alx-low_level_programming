
#include <stdlib.h>
#include "main.h"

/**
 * malloc checking - to  allocate memory using malloc
 * @b:how many bytes are allocated
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b);
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

