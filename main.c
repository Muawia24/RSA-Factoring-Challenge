#include "main.h"
/**
 * check_args - checks arguments if true it open the file arg
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: file struct
 */
FILE *check_args(int argc, char *argv[])
{
	FILE *fd;

	if (argc != 2)
	{
		dprintf(2, "USAGE: factors <file>\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	return (fd);
}
/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	FILE *fd;
	char *buf = NULL;
	size_t size = 0;
	ssize_t n_line = 0;

	fd = check_args(argc, argv);

	while ((n_line = getline(&buf, &size, fd)) != -1)
	{
		print_product(buf);

	}

	fclose(fd);

	return (0);
}
