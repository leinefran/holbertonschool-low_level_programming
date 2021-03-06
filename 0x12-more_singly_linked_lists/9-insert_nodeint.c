#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 *
 * @head: points to the pointer that points to the address of the first node.
 * @n: the value inside the node.
 * @idx: the position where the new node should be added.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 1;
	listint_t *new_node, *current;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	current = *head;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	while (count < idx)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
		count++;
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
