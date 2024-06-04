#include "main.h"
#include <stddef.h>

/**
 * _strstr - located a substring
 * @haystack: the string to be searched
 * @needle: the substring to search for.
 *
 * Return: a pointer to the beginning of hte located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}

		if (*pattern == '\0')
		{
			return begin;
		}
		haystack = begin + 1;
	}
	return (NULL);
}
