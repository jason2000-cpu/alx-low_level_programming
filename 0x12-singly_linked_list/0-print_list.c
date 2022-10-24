#include <stdio.h>
#include <stdlib.h>
/*
 * print_list- Entry level
 *
 * Description: This function prints all elements of a linked list
 *
 * @h: the list to print its elements
 *
 * Return: Returns nothing
 *
 */

size_t print_list(const list_t *h)
{
	struct list_t  *temp = head;

	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}
