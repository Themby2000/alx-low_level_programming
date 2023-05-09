#include "main.h"

/**
* append_text_to_file - Function appends text at the end of a file
* @filename: filenames.
* @text_content: added contents.
*
* Return: 1 if the file exists. -1 if the fails does not exists.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fds;
int nletters;
int rwr;

if (!filename)
return (-1);

fds = open(filename, O_WRONLY | O_APPEND);

if (fds == -1)
return (-1);

if (text_content)
{
for (nletters = 0; text_content[nletters]; nletters++)
;

rwr = write(fds, text_content, nletters);

if (rwr == -1)
return (-1);
}

close(fds);

return (1);
}
