#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - func to concatenates two strings.
 * @s1: 
 * @s2:
 *
 * Return: 
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	unsigned int length;
	unsigned int x;
	char *result;

	if ((s1 == '\0') || (s2 == '\0'))
		return (NULL);

	char *result = malloc(sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}


}
