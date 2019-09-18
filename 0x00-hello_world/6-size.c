#include <stdio.h>
/**
* main - Prints the size of each variable
* Return: 0 prints sizes
*/
int main(void)
{
	printf("Size of a char: %lu\n", sizeof(char));
	printf("Size of an int: %lu\n", sizeof(int));
	printf("Size of a long int: %lu\n", sizeof(long));
	printf("Size of a long long int: %lu\n", sizeof(long long int));
	printf("Size of a float: %lu\n", sizeof(float));
	return (0);
}
