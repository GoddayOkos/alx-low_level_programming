#include "lists.h"

/**
 * reverse_listint - A function that reverses a linked list
 * @head: A pointer to listint_t structure
 * Return: A pointer to the first node of the reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	if (*head == NULL || head == NULL)
		return (NULL);

	while (*head->next)
	{
		next = *head->next;
		*head->next = prev;
		prev = *head;
		*head = next;
	}
	*head->next = prev;

	return (*head);
}
