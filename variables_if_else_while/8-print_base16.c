#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
int number;

for (number = '0'; number <= '9'; number++)
{
putchar(number);
}
if (number = '9')
{
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
if (letter == 'f')
{
putchar('\n');
}
}
}
return (0);
}
