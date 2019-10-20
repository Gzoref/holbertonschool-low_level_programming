#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Generates random valid passwords for the program 101-crackme.
 *
 * description: finds checksum value from objdump
 *
 * Return: 0
 */


int main(void)
{
	int counter, sum, random;

	char numAndLet [80] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char password [80];

	srand(time(NULL));
	sum = 0;
	counter = 0;

	while (sum < (2772 - 122))
	{
		random = rand() % 62;
		password[counter] = numAndLet[random];
		sum += password[counter];
		counter++;
	}

	random = 2772 - sum;
	password[counter] = random;
	printf("%s\n", password);

	return 0;
}
