#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry type
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int lowercase = 'a';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase += 1;
}
putchar('\n');
return (0);
}
