#include "main.h"
sgawraer
/**
 * _memset - Fills the first n bytes of the memory area
 * pointer to by s with the constant byte b.
 *
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to fill the memory area with.
 * @n: the number of bytes to be filled.
 *
 * Return: A pointer to the memory area s.
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}

	return (s);
}
