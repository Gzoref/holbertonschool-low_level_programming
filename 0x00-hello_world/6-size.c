#include <stdio.h>
/**
* main - Prints the size of each variable
* Return: 0 prints sizes
*/
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %d bytes(s)\n", sizeof(float));
	return (0);
}
