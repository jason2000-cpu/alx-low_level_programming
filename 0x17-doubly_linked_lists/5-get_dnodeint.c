#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of list
 * @head: head node of the list
 * @index: node to locate
 *
 * Return: index or NULL on non-existence
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
