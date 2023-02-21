#include "main.h"
#include <stdio.h>

/**
 * main - Prints 9 times table, strating with 0.
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
    int i, j;

    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            int result = i * j;

            if (j == 0)
            {
                printf("%d", result);
            }
            else if (result < 10)
            {
                printf(",  %d", result);
            }
            else
            {
                printf(", %d", result);
            }
        }
        printf("\n");
    }
}
