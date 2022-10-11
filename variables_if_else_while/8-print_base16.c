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
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
printf("\n");
return (0);
}
