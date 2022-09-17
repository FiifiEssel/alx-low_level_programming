#include "main.h"
#include <stdio.h>

/**
 * main - where the program execution starts
 *
 * Return: o wheren sucessful
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
	if (num == 100)
		printf("Buzz");
	else if ((num % 5 == 0) && (num % 3 == 0))
		printf("FizzBuzz ");
	else if ((num % 5 != 0) && (num % 3 == 0))
		printf("Fizz ");
	else if ((num % 5 == 0) && (num % 3 != 0))
		printf("Buzz ");
	else
		printf("%d ", num);
	}
	print("\n");
	return (0);
}
