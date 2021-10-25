#include "sort.h"

/**
 * bubble_sort - sorts an array in ascending order
 * @array: Array pointer
 * @size: Leng5h of array
 * Return; void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				swap(array, j, j + 1);
				print_array(array, size);
			}

	}
}

/**
 * swap - swaps two elements in an array.
 * @array: Array pointer
 * @x: index of the first element
 * @y: index of second element
 * Return: void
 */

void swap(int *array, size_t x, size_t y)
{
	size_t temp;

	temp = array[x];
	array[x] = array[y];
	array[y] = temp;
}
