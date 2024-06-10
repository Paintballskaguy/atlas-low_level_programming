#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
    char *orig = dest;
    
    while (*src)
    {
        *dest++ = *src++;
    }
    *dest = '\0';
    
    return (orig);
}
