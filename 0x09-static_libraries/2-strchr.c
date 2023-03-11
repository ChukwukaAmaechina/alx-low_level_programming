#include "main.h"

/**
 * _strchr - Function to locate string character
 * @s: string source
 * @c: character to find
 *
 * Return: the character found from the string
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
