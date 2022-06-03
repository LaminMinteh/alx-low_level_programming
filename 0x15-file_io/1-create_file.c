#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * return: 1 if sucessful.
 */

int create_file(const char *filename, char *text_content)
{

int f;
int letter;
int rwr;

if (!filename)
return (-1);

f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (f == -1)
return (-1);

if (!text_content)
text_content = "";

for (letter = 0; text_content[letter]; letter++)
rwr = write(f, text_content, lettes);
if (rwr == -1)
return (-1);
close(f);
return (1);
}
