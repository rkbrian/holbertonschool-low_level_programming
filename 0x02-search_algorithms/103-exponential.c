#include "search_algos.h"

/**
 * exponential_search - search for a value in a sorted array of integers
 *  using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of the value
 */
int exponential_search(int *array, size_t size, int value)
{
	int left_i = 1, right_i, size_end = size;

	if (!array || !size)
		return (-1);
	while (left_i < size_end && array[left_i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", left_i, array[left_i]);
		left_i *= 2;
	}
	right_i = two_val_min(left_i, size - 1), left_i /= 2;
	printf("Value found between indexes [%d] and [%d]\n", left_i, right_i);
	return (binary_search_short_arr(array, left_i, right_i, value));
}

/**
 * binary_search_short_arr - search for value in a sorted short array of int
 * @array: a pointer to the first element of the array to search in
 * @left_i: the left bound of array indexes
 * @right_i: the right bound of array indexes
 * @value: the value to search for
 * Return: index of the value
 */
int binary_search_short_arr(int *array, int left_i, int right_i, int value)
{
	int i, mid;

	if (!array || left_i > right_i)
		return (-1);
	while (left_i <= right_i)
	{
		mid = left_i + (right_i - left_i) / 2;
		printf("Searching in array: ");
		for (i = left_i; i < right_i; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		if (array[mid] > value)
			right_i = mid - 1;
		else if (array[mid] < value)
			left_i = mid + 1;
		else
			break;
	}
	if (array[mid] == value && (left_i <= right_i))
		return (mid);
	else if (left_i == right_i && array[right_i] == value)
		return (right_i);
	return (-1);
}

/**
 * two_val_min - compare 2 integers and return the smallest one
 * @x: number to be compeared with
 * @y: number to be compeared with
 * Return: the smallest integer
 */
size_t two_val_min(size_t x, size_t y)
{
	if (x < y)
		return (x);
	return (y);
}
