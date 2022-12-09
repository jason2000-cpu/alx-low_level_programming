#include "lists.h"

/**
 * dlistint_len - returns the number of elements in the lists
 * @h: head node of the list
 *
 * Return: number of elements in the lists
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
