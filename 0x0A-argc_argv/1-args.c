#include <stdio.h>

/**
 * main - checks the code
 * @argc:number of arguments
 * @argv:array of arguments
 *
 * Return: always 0 on sucess
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
