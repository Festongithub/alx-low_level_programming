#include <stdio.h>

/**
 * main - checks the code
 *  prints the name of the file
 *  it was compiled from,
 *  followed by a new line
 *  Return: Always 0
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
