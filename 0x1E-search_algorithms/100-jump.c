#include "search_algos.h"

/**
 * jump_search -  searches for a value in a sorted array of
 * integers using the Jump search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size:  the number of elements in array.
 * @value: value to search for.
 * Return:  return the index where value is located,
 * or-1 If value is not present in array or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, step = 0;

	if (!array)
		return (-1);
	step = sqrt(size);
	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += step;
	}

	step = i - step;
	printf("Value found between indexes [%lu] and [%lu]\n", step, i);
	i = i >= size ? size - 1 : i;
	while (step <= i)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		if (array[step] == value)
			return (step);
		step++;
	}
	return (-1);
}
