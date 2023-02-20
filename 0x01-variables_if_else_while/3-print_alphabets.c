#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: Prints all lowrcase & upprcase letters on single line
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

