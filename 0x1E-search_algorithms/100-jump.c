#include "search_algos.h"

/**
 * jump_search - performs jump search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
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
