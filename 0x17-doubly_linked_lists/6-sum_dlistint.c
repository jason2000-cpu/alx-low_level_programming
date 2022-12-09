#include "lists.h"

/**
 * sum_dlistint - returns sum of all data of the linked list
 * @head: head node
 *
 * Return: 0 on empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
