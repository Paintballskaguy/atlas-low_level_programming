#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: the string to be scanned
 * @accept: the string containing the list of the characters to match
 * in s.
 *
 * Return: the number of bytes in the inital segment of s
 * which consists only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accepted[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}
		count++;
	}
	return (count);
}
