#include <stdio.h>

/**
 * main - main entry
 *
 * Result: always 0
 */

int main(void)
{
	char i;

	for (i = "a" ; i <= "z" ; i++)
		putchar(i);
	putchar("\n");
	return (0);
}
