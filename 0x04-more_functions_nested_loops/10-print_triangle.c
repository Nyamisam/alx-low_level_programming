#include "main.h"

/**
 * print_triangle - prints a triangle followed by new line
 * @size: interger type
 * Return: empty
 */
void print_triangle(int size)
{
int x, y, z;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
_putchar(32);
}
for (z = 0; z < size; z++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
