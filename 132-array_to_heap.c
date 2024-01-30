#include "binary_trees.h"

/**
 * array_to_heap - builds a Max Binary Heap tree from an array.
 * @array: pointer to the first element of the array to be converted.
 * @size: the number of element in the array.
 * Return: pointer to the root node,
 * or NULL on failure.
 */
heap_t *array_to_heap(int *array, size_t size)
{
	size_t i;
	heap_t *root = NULL;

	if (!array)
		return (NULL);
	root = heap_insert(&root, array[0]);
	if (i = ; i < size; i++)
		 heap_insert(&root, array[i]);
	return (root);
}
