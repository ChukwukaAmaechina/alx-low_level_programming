#include "main.h"
#include <stdio.h>

/**
  * cap_string - function to reverse a string
  * @s: string to be reversed
  *
  * Return: char value
  */
char *cap_string(char *s)
{
	int a = 0, i;
	int cpc = 13;
	char pc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < cpc)
		{
			if ((a == 0 || s[a - 1] == pc[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
