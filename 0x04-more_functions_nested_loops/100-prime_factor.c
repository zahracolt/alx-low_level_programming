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
	      long int n, fp;

              n = 612852475143;

              for (fp = 2; fp <= n; fp++)
	      {
		       if (n % fp == 0)
		       {
			      n /= fp;
			      fp--;
		       }
	      }
	      printf("%ld\n", fp);
	      return (0);
}
