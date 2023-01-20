#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - the sum of all its parameters
 * @n: number of parameters received
 *
 * Return: 0 if n is 0 of the sum of paramet
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    va_start(args, n);

    for (unsigned int i = 0; i < n; i++)
    {
        const char *str = va_arg(args, const char *);
        if (str == NULL)
            printf("(nil)");
        else
            printf("%s", str);
        if (separator != NULL && i < n - 1)
            printf("%s", separator);
    }
    va_end(args);
    printf("\n");
}

