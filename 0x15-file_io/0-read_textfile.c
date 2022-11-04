#include "main.h" 

/**
 *read_textfile -  Reads and prints it to the POSIX standard output.
 *@filename: name of the file.
 *@letters: no of letters to print.
 *Description - read_textfile: a function that reads a text file and prints.
 *Return: null if it failes.
 */
ssize_t read_textfile(const char* filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, buf, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(o);
	return (w);
}
