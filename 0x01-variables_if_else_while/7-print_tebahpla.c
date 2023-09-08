#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)

	putchar(letter);

	putchar('\n');

	return (0);
}
