#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

char c;
int i;
long l;
long long ll;
float f;

 	printf("size of char:%lu byte(s)\n", sizeof(c));
  printf("size of an int: %lu byte(s)\n", sizeof(i));
  printf("size of long int: %lu byte(s)\n", sizeof(l));
  printf(" size of long long int: %lu byte(s)\n", sizeof(ll));
  printf("size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
