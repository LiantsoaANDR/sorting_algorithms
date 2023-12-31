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
	int temp, sort = 0;
	size_t j = 0, i;

	if (!array || size < 2)
		return;

	while ((j < size - 1) && sort == 0)
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
				print_array(array, size);
			}
		}
		j++;
	}
}
