#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
    int fib[50];
    fib[0] = 1;
    fib[1] = 2;
    printf("%d, %d, ", fib[0], fib[1]);

    for (int i = 2; i < 50; i++) {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d", fib[i]);
        if (i != 49) {
            printf(", ");
        }
    }

   	 printf("\n");
	return (0);
}
