#include "main.h"
#include <stdio.h>

/**
 * print_square - Will print a square on the termninal
 * @size: determines number if times needed for square
 * Return: returns void
 */

void print_square(int size)
{
	int count1, count 2;

	if (size <= 0)
		putchar('\n');
	else
	{
	for (count1 = 1; count1 <= size; count1++)
	{
		for (count2 = 1; count2 <= size; count2++)
			putchar(35);
	putchar('\n');
	}
	}
}
