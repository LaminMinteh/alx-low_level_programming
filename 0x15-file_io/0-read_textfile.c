#include "main.h"

/**
 * read_textfile - reads text file and prints the content
 * @filename: filename
 * @letter: print letters
 * return: numbers of letters printed.
 */

ssize_t read_textfile(const char *filename, size_t letter)
{
int f;
ssize_t nrd, nwr;
char *buf;

if (!filename)
return (0);

f = open(filename, O_RDONLY);

if (f == -1)
return (0);

buf = malloc(sizeof(char) * (letter));
if (!buf)
return (0);
nrd = read(f, buf, letters);
nwr = write(STDOUT_FILENO, buf, nrd);
close(f);
free(buf);
return (nwr);
}
