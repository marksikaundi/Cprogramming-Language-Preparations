#include <stdlib.h>
#include "alx.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with s apecific char
 * @size: size of the aarry to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_Array(unsigned int size, char c)
{
	char *p;
	unsigned int 1 = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i <size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);

}
