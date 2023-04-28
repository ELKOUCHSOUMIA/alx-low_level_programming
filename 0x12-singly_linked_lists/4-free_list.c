#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list
 * @head: head of the linked lists
 *
 * Return: no return
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
