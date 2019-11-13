#include "holberton.h"

/**
 * main - Copies content of file to another
 *
 * @argc: int
 *
 * @argv: double pointer
 *
 * Return: Copy of file
 */

int main(int argc, char **argv)
{
	int fd, fd2, fdWrite, fdRead = 1;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);

	fd = open(argv[1], O_RDONLY);

	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);

	fd2 = open(argv[2], (O_CREAT | O_WRONLY | O_TRUNC), 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", argv[2]);
	exit(99);

	while (fdRead != 0)
	{
		fdRead = read(fd, buffer, 1024);
		if (fdRead == 1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);

		fdWrite =  write(fd, buffer, fdRead);

		if (fdWrite == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to  %s\n", argv[2]);
		exit(99);
	}

	if (close(fd == -1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);

	if (close(fd2 == -1))
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
	exit(100);
	return (0);
}
