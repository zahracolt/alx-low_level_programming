/*
 * File: 100-prime_factor.c
*/

#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	      long int n, i;

              n = 612852475143;
              for (i = 2; i < n; i++)
              {
                  while (n % i == 0)
                  n = n / i;
	      }
	
	      printf("%lu\n", n);;
	      return (0);
}
