#include <stdio.h>
#include <ctype.h>
/**
*main - prints all single numbers with a space after each, then a new line is printed
*Return: always 0 (success)
*/
int main(void)
{
	int NUM;

	for (NUM = '0'; NUM <= '9'; NUM++)
	{
		putchar(NUM);
		if (NUM == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
