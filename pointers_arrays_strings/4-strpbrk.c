#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _strchr - Locates the first occurrence of the character c
 *           in the string s.
 * @s: Pointer to the string to be searched.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of the character c
 *         in the string s, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
		
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}


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
	while (*s != '\0')
	{
		if (*_strchr(accept, *s) != 0)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
