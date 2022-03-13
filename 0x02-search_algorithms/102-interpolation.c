#include "search_algos.h"

/**
 * interpolation_search - search for a value in a sorted array of integers
 *  using the Interpolation search algorithm
 * @array: pointer to the first element of the sorted array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, or -1 if failed
 */
int interpolation_search(int *array, size_t size, int value)
{
	int pos, left_i = 0, right_i = size - 1, size_end = right_i;

	if (!array || left_i > right_i)
		return (-1);
	while (left_i < right_i)
	{
		pos = left_i + (((double)(right_i - left_i) /
		(array[right_i] - array[left_i])) * (value - array[left_i]));
		if (pos > size_end)
		{
			printf("Value checked array[%d] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] > value)
			right_i = pos - 1;
		else if (array[pos] < value)
			left_i = pos + 1;
		else
			break;
	}
	if (array[pos] == value && (left_i <= right_i))
		return (pos);
	else if (left_i == right_i && array[right_i] == value)
		return (right_i);
	return (-1);
}
