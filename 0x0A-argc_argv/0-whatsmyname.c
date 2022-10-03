#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments passedto the function
 * @argv: argument vector pointer to string
 *
 * Return: Always 0 (Succes)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
