#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: this is the main function program
 * this uses if else stat print last digit
 * Return: is always 0
 */
int main(void)
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
  if ((n % 10) > 5)
    printf("Last digit of %d is and %d is greater than 5\n",n,(n % 10));
  else if ((n % 10) == 0)
    printf("Last digit of %d is and %d is 0\n",n,(n % 10));
  else if ((n % 10) < 6 && (n % 10) != 0)
    printf("Last digit of %d is and %d is less than 6 and not 0\n",n,(n % 10));
  return (0);
}
