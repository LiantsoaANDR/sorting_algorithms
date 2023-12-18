#include "sort.h"

listint_t *swap(listint_t *l1, listint_t *l2);
/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm
 * prints each time two elements are swaped
 *
 * @list: pointer to the pointer of the list
 *
 * Return: Nothing (void)
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = *list, *temp;

	if (!list || !(*list))
		return;

	while (current->next)
	{
		temp = current;
		current = current->next;
		if (temp->n > temp->next->n)
		{
			temp = swap(temp, temp->next);
			while (temp->n < temp->prev->n)
				temp = swap(temp, temp->prev);
		}
	}
}
/**
 * swap - swaps two nodes in a doubly linked list
 * @l1: the first node
 * @l2: the second node
 *
 * Return: The place of l1, ie where l2 is
 */
listint_t *swap(listint_t *l1, listint_t *l2)
{
	listint_t *temp = l1;

	l1->next = l2->next;
	l1->prev = l2->prev;
	l2->next = temp->next;
	l2->prev = temp->prev;

	return (l2);
}
