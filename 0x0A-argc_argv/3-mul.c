#include <stdio.h>
#include <stdlib.h>
/**
 * main - where program execution begins
 * @argc: commands in the command line count
 * @argv: array storing values of argc
 * Return: returns 1 when there is an error
 *
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
