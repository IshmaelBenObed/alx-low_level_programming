#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int mynum1;
int mynum2;

for (mynum1 = 0; mynum1 < 9; mynum1++)
{

for (mynum2 = mynum1 + 1; mynum2 < 10; mynum2++)
{

putchar((mynum1 % 10) + '0');
putchar((mynum2 % 10) + '0');

if (mynum1 == 8 && mynum2 == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);

}
