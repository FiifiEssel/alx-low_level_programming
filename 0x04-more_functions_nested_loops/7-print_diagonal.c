#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - will print diagonal lines on the terminal
 * @n: will determine numbers of diagonal line
 * Return: return print_diagonal
 */

void print_diagonal(int n)
{
	int n1, n2;

	if (n <= 0)
		putchar('\n');
	else if (n == 1)
	{
		putchar(92);
		putchar('\n');
	}
	else
	{
	for (n1 = 1; n1 <= n; n1++)
	{
		n2 = 1;
		while (n2 < n1)
		{
			putchar(' ');
			n2++;
		}
		putchar(92);
		putchar('\n');
	}
	}
}
