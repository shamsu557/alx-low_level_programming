#include <stdio.h>
/**
 * main-progarm to get upper lower case letters from A to Z
 * Return:alwaays 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a', c = 'z', c = c++)
		putchar(c);

	for (c = 'A', c = 'Z', c = c++)
		putchar(c);
			puchar('\n')
}

