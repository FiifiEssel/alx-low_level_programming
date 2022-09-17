#include "main.h"
#include <stdio.h>
/**
 * print_line - will draw a straight line in terminal
 * @n: number of times n_is printed
 * Return: returns printe_lines
 */
void print_line(int n)
{
	int n1 = 1;

	if (n <= 0)
	{
	}
	else
		for (n1 = 1; n1 <= n; n1++)
			putchar(95);
	putchar('\n');
}
