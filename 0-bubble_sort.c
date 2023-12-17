#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: the array to sort
 * @size: the size of the array
 *
 * Return: nothing, (void)
 */
void bubble_sort(int *array, size_t size)
{
	int temp, sort;
	size_t j = 0, i;

	while (j < size - 1)
	{
		sort = 1;
		for (i = 0; i < (size - 1 - j); i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				sort = 0;
			}
		}
		if (sort == 1)
			return;
		j++;
	}
}
