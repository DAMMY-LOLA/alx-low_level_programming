#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: sum.
 *
 * Return: 0 or value
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	unsigned int m, i, sum = 0;

	/* Initialising the argument list */
	va_start(op, n);

	/* conditioning a statement */
	if (n == 0)
	{
		return (0);
	}

	else
		/* looping through the arguments */
		for (m = 0; m < n; m++)
		{
			i = va_arg(op, unsigned int);
			sum += i;
		}
	/* Clean up the argument list */
	va_end(op);

	return (sum);
}
