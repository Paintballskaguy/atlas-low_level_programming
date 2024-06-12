#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string (s1 + s2), or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	size_t len1, len2;
	

	if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    len1 = strlen(s1);
    len2 = strlen(s2);

    con = malloc((len1 + len2 + 1) * sizeof(char));
    if (con == NULL)
        return NULL;

    strcpy(con, s1);
    strcpy(con + len1, s2);

    return con;
}
