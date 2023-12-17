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
	int i, temp, sorted = 0;

	for (i = 0; i < (size - 1 - i); i++)
	{
		if (array[i] > array[i + 1])
		{
			temp = array[i];
			array[i] = array[i + 1];
			array[i] = temp;
		}
	}
}
