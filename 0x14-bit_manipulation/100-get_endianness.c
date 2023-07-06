#include "main.h"

/**
* get_endianness - Function checks the endianness.
*
* Return: If big-endian - 0.
*         If little-endian - 1.
*/
int get_endianness(void)
{
int nums = 1;
char *endiane = (char *)&nums;

if (*endiane == 1)
return (1);

return (0);
}
