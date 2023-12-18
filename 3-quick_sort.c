#include "sort.h"
void swap(int *ptr1, int *ptr2);
void recursion(int *array, int low, int high, size_t size);
int partition(int *array, int low, int high, size_t size);
/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Auick sort algorithm
 * Prints the array after each time two elements are swaped
 *
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: Nothing (void)
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	recursion(array, 0, size - 1, size);
}

/**
 * swap - swaps two values of the two pointers
 * @ptr1: the first pointer
 * @ptr2: the second pointer
 *
 * Return: Nothing
 */
void swap(int *ptr1, int *ptr2)
{
	int temp = *ptr1;

	*ptr1 = *ptr2;
	*ptr2 = temp;
}
/**
 * recursion - the quicksort algorithm with recursion
 * @array: the array
 * @low: the low index, ie the first elem
 * @high: the high index, ie the last elem
 * @size: the size of the array
 *
 * Return: Nothing
 */
void recursion(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low >= high)
		return;

	pivot = partition(array, low, high, size);
	recursion(array, low, pivot - 1, size);
	recursion(array, pivot + 1, high, size);
}
/**
 * partition - implements the lomuto partition
 * @array: the array
 * @low: the low index, ie the first elem
 * @high: the high index, ie the last elem
 * @size: the size of the array
 *
 * Return: the index of the pivot
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot, i, idx = low;

	pivot = array[high];
	for (i = low; i < high; i++)
	{
		if (array[i] <= pivot)
		{
			swap(&array[i], &array[idx]);
			idx++;
		}
	}

	swap(&array[high], &array[idx]);
	print_array(array, size);

	return (idx);
}
