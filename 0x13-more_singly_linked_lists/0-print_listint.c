#include <stdio.h>
#include "lists.h"

/**
  * print_listint - Prints all the elements in a linked list
  * @h: The head
  *
  * Return: The number of nodes of the linked list
  */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}

	return (count);
}
