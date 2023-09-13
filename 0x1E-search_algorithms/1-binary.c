#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return:  return the index where value is located,
 * or-1 If value is not present in array or if array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid_indx, low = 0, high = size - 1, i;

	if (!array)
		return (-1);
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i < high; i++)
			printf("%d,", array[i]);
		printf("%d\n", array[i]);
		mid_indx = low + (high - low) / 2;
		if (array[mid_indx] == value)
			return (mid_indx);
		if (array[mid_indx] < value)
			low = mid_indx + 1;
		else
			high = mid_indx - 1;
	}
	return (-1);
}
