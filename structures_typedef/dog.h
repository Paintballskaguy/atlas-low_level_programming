#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct representing a dog.
 * @name: name of the dog (%s)
 * @age: age of the dog (%f)
 * @owner: owner of the dog (%s)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/*typedef nickname for struct dog is now dog_t*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


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

/**
 * _strlen - Returns the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int len = 0;

    while (s[len] != '\0')
    {
        len++;
    }
    return (len);
}


#endif /* DOG_H */
