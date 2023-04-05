#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - Adds a new node at the beginning of a linked list
  * @head: linked list head
  * @n: value to add to the new node
  *
  * Return: address of the new element, or NULL it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
