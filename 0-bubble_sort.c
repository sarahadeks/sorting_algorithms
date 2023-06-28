#include <stdio.h>
#include "sort.h"

/**
* bubble_sort -function that sorts an array of integers in ascending order
* @array: array of integers
* @size: size of array
* Return: Nothing
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp, tmp;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		tmp = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				tmp = 1;
			}
		}
		if (tmp == 0)
			break;
	}
}
