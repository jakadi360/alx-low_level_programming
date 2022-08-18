#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: a pointer to the bit
 * @index: the index to set the value at - indices start at 0
 *
 * return: if an error occurs - -1 otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) *s))
return (-1);

*n ^= (1 << index);

return (1);
}
