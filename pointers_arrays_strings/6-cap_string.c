#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be modified
 * Return: pointer to the resulting string
 */

char *cap_string(char *str)
{
	int i = 0;

	char separators[] = " \t\n,;.!?\"(){}";
	int j;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	i++;

	while (str[i] != '\0')
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
				break;
			}
		}
		i++;
	}

	return (str);
}
