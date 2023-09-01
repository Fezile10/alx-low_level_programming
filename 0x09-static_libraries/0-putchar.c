#include <unistd.h>

/**
 * _putchar - to write the character c
 * @c: Input character
 *
 * Return: On success 1
 * On error, -1 returns, and errno is set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
