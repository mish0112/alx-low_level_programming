#include <stdio.h>
#include <ctype.h>
/**
*main - entry point
*Return: always 0 (success)
*/
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
