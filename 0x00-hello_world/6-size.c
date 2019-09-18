#include <stdio.h>
/**
* main - Prints the size of each variable
* Return: 0 prints sizes
*/
int main(void)
{
	printf("Size of a char: %i\n", sizeof(char));
	printf("Size of an int: %i\n", sizeof(int));
	printf("Size of a long int: %i\n", sizeof(long));
	printf("Size of a long long int: %i\n", sizeof(long long int));
	printf("Size of a float: %i\n", sizeof(float));
	return (0);
}
