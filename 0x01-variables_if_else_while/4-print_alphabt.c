#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line but excludes characters e and q
 * Return: 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
