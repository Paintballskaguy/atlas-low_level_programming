#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept.
 * @s: the string to be searched
 * @accept: the string containing the list of bytes to match in s.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);

}
