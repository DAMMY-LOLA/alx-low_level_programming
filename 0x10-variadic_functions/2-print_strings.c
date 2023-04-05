#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string.
 * @n: umber of strings.
 *
 * return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *v;

	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		v = va_arg(str, char *);

		if (v)
			printf("%s", v);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(str);
}
