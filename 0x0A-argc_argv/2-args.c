#include <stdio.h>

/**
 * main- Where program execution starts
 * @argc: number of command line arguments
 * @argv: an array pointing to argc
 * Return: returns 0 on sucess
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		print("%s\n", argv[i]);
	}
	return (0);
}
