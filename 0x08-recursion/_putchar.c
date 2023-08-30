clude "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c on stdout
 * @c: The character that print
 *
 * Return: 1
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
