#include "main.h"

/**
 * _strcmp - Function that compares two string
 * @s1: First string
 * @s2: Second string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0, comp;

	while (s1[i])
	{
		i++;
	}
	while (s2[b])
	{
		j++;
	}
	if (i <= j)
	{
		comp = i;
	}
	else
	{
		comp = j;
	}
	while (k <= comp)
	{
		if (s1[k] == s2[k])
		{
			k++;
			continue;
		}
		else
		{
			r = s1[k] - s2[k];
			break;
		}
		k++;
	}
	return (l);
}
