#include <stdio.h>

/**
 * main - this is the enrty level for program execution
 * @argc: this is the count for the number of command lines
 * @argv: this is the array that hols th valu for argc
 * Return: return 0 if the program execution is sucessful
 */

int main(int argc, char argv[] __attribute__((unused)))
{
	printf("%d\n", (argc - 1));
	return (0);
}
