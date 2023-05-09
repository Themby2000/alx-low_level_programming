#include "main.h"

/**
* read_textfile - Function reads a text file and prints the letters
* @filename: filenames.
* @letters: numbers of letters printeds.
* Return: numbers of letters printed. It fails, returns 0.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fds;
ssize_t nrds, nwrs;
char *buff;

if (!filename)
return (0);

fds = open(filename, O_RDONLY);

if (fds == -1)
return (0);

buff = malloc(sizeof(char) * (letters));
if (!buff)
return (0);

nrds = read(fds, buff, letters);
nwrs = write(STDOUT_FILENO, buff, nrds);

close(fds);

free(buff);

return (nwrs);
}
