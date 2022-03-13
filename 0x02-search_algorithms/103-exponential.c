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
        ;
}




/**
 * binary_search - search for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index of the value
 */
int binary_search(int *array, size_t size, int value)
{
	int i, mid, left_i = 0, right_i = size - 1;

	if (left_i > right_i)
		return (-1);
	printf("Searching in array: ");
	for (i = left_i; i < right_i; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
	while (left_i < right_i)
	{
		mid = left_i + (right_i - left_i) / 2;

		if (array[mid] > value)
			right_i = mid - 1;
		else if (array[mid] < value)
			left_i = mid + 1;
		else
			break;
		printf("Searching in array: ");
		for (i = left_i; i < right_i; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
	}
	if (array[mid] == value && (left_i <= right_i))
		return (mid);
	else if (left_i == right_i && array[right_i] == value)
		return (right_i);
	return (-1);
}
