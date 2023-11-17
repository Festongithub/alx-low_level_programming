#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code
 * @argc:number of arguments
 * @argv:array of arguments
 *
 * Return: always 0 on sucess
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	int result = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);
	return (0);
}
