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
	int num1;
	int num2;
	int mul;

	mul = num1 * num2;
	if (argc != 2)
	{
		printf("Error \n");
		return (1);
	}
	else
	{
		printf("%d\n", mul);
	}
	return (0);
}
