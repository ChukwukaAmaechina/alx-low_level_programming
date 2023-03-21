#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - ...
  * @name: ...
  * @age: ...
  * @owner: ...
  *
  * Return: ...
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogy;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		dogy = malloc(sizeof(dog_t));

		if (dogy == NULL)
			return (NULL);

		dogy->name = malloc(sizeof(char) * name_l);

		if (dogy->name == NULL)
		{
			free(dogy);
			return (NULL);
		}

		dogy->owner = malloc(sizeof(char) * own_l);

		if (dogy->owner == NULL)
		{
			free(dogy->name);
			free(dogy);
			return (NULL);
		}

		dogy->name = _strcpy(dogy->name, name);
		dogy->owner = _strcpy(dogy->owner, owner);
		dogy->age = age;
	}

	return (dogy);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	dest[j++] = '\0';

	return (dest);
}
