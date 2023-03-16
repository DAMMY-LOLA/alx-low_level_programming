#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: destination
 * @src: source
 * @n: string to be copied.
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int u;

	for (u = 0; u < n && src[u] != '\0'; u++)
	{
		dest[u] = src[u];
	}
	for (; u < n; u++)
	{
		dest[u] = '\0';
	}
	return (dest);
}

