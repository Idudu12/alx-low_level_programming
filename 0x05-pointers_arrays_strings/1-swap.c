#include "main.h"

/**
 * swap_int - swap two integer
 * @a: first int
 * @b: second int
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
