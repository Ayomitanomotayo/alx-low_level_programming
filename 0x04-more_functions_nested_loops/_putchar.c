#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the charcter c to stdout
 * @c: the character to point
 *
 * Return: on success 1.
 * On error, -1 is returned, and error is set appropriately
 */
int _put(char c)
{
return (write(1, &c, 1));
}
