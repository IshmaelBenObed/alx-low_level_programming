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
int mynum3;

for (mynum1 = 0; mynum1 < 7; mynum1++)
{
for (mynum2 = mynum1 + 1; mynum2 < 8; mynum2++)
{
for (mynum3 = mynum2 + 1; mynum3 < 9; mynum3++)
{
putchar((mynum1 % 10) + '0');
putchar((mynum2 % 10) + '0');
putchar((mynum3 % 10) + '0');
}
if (mynum1 == 7  &&  mynum2 == 8  &&  mynum3 == 9)
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
