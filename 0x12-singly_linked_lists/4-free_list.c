#include <stdlib.h>
#include "lists.h"
/**
 * free_list - freeing a linked list
 *@head: pointer to head node
 *
 *Return: Always success
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (temp)
	{
	temp = head->next;
	free(head->str);
	free(head);
	head = temp;
	}
}
