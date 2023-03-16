#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: destination memory area.
 * @src: source memory area
 * @n: memeory area to be copied.
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int  p;

	for (p = 0; p < n; p++)
		*(dest + p) = *(src + p);

	return (dest);
}

