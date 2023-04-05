#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string.
 * @n: number of integers.
 *
 * Return: value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* Declaring the argument list */
	va_list arg;
	unsigned int m, num;

	/* Intialising the argument list */
	va_start(arg, n);

	/* looping through the argument */
	for (m = 0; m < n; m++)
	{
		num = va_arg(arg, unsigned int);
		printf("%d", num);

		/* conditioning a statement*/
		if (separator != NULL && m < n - 1)
		{
			printf("%s", separator);
		}
	}
	/* Cleaning up the argument list */
	va_end(arg);

	printf("\n");
}
