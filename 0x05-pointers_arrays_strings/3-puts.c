#include "main.h"

/**
 * _puts - prints a string and new line to standard output
 * @str: string output
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
