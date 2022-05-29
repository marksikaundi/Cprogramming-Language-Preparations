#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly "and that piece of art is useful
 * - Dora Korpar, 2015-10-9",
 *   followed by new line, to the standard error.
 *   Return: Always 0 (Success)
 */

int main(void)
{
	write(2, "and the piece of art is useful\" -Dora Korpar, 2015-10-9\", 59);
	return (1);
}
