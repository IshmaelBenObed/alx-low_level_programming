#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char myalphabet;

for (myalphabet = 'a'; myalphabet <= 'z'; myalphabet++)

{

if (myalphabet == 'e' || myalphabet == 'q')

continue;

putchar(myalphabet);
}
putchar('\n');

return (0);

}
