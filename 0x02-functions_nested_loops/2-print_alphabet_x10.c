#include "main.h"
/**
 *print_alphabet_x10(void) - make the * alphabet x10 times
 * Return: void  
 */

void print_alphabet_x10(void)
{
char i;
int a = 0;

while (a <= 9)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
a++;
}

}
