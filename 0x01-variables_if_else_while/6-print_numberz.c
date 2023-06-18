#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int r;

for (r = 0;  r < 10;  r++)

{
putchar((r%10) + '0');
}

printf("\n");

return (0);

}
