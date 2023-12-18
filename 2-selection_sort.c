#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * using Selection sort algorithm
 * Prints the array after each two elements are swaped
 *
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: Nothing (void)
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;
	int temp;

	if (!array || size < 2)
		return;

	for (j = 0; j < (size - 1); j++)
	{
		idx = j;
		for (i = j + 1; i < size; i++)
		{
			if (array[idx] > array[i])
				idx = i;
		}
		if (idx != j)
		{
			temp = array[idx];
			array[idx] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
	}
}
