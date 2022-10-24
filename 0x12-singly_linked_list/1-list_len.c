#include <stdio.h>
#include "main.h"
/*
 * list_len- Entry level
 *
 * Description: This function prints the length of the linked list
 *
 * @h: the list to print its elements
 *
 * Return: Returns nothing
 *
 */

size_t list_len(const list_t *h)
{
	struct list_t  *temp = head;

	int count = 0;

	while(temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	printf("%d \n", count);
}
