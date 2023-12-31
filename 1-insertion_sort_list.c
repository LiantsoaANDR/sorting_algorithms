#include "sort.h"

listint_t *swap(listint_t *l1, listint_t *l2, listint_t **list);
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
	listint_t *current, *temp;

	if (!list || !(*list))
		return;

	current = (*list)->next;
	while (current)
	{
		temp = current;
		current = current->next;

		while (temp->prev && (temp->n < temp->prev->n))
		{
			temp = swap(temp, temp->prev, list);
			print_list(*list);
		}
	}
}
/**
 * swap - swaps two nodes in a doubly linked list
 * @l1: the first node
 * @l2: the second node
 * @list: the list
 *
 * Return: The place of l1, ie where l2 is
 */
listint_t *swap(listint_t *l1, listint_t *l2, listint_t **list)
{
	if (l2->prev)
		l2->prev->next = l1;
	if (l1->next)
		l1->next->prev = l2;

	l2->next = l1->next;
	l1->prev = l2->prev;
	l2->prev = l1;
	l1->next = l2;

	if (!(l1->prev))
		*list = l1;

	return (l1);
}
