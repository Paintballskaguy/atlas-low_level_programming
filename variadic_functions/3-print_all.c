#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything based on the format provided
 * @format: A list of types of arguments passed to the function
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    unsigned int j;
    char *str;
    const char t_arg[] = "cifs";
    int printed = 0;

    va_start(args, format);

    while (format && format[i])
    {
        j = 0;

        while (t_arg[j])
        {
            if (format[i] == t_arg[j])
            {
                if (printed)
                    printf(", ");
                printed = 1;
                switch (format[i])
                {
                    case 'c':
                        printf("%c", va_arg(args, int));
                        break;
                    case 'i':
                        printf("%d", va_arg(args, int));
                        break;
                    case 'f':
                        printf("%f", va_arg(args, double));
                        break;
                    case 's':
                        str = va_arg(args, char *);
                        printf("%s", str ? str : "(nil)");
                        break;
                }
                break;
            }
            j++;
        }
        i++;
    }
    printf("\n");
    va_end(args);
}
