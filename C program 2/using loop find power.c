#include <stdio.h>

int main()
{
  int i, Number, Exponent;
  long pw = 1;

  printf("\n Please Enter any Number : ");
  scanf(" %d", &Number);

  printf("\n Please Enter the Exponent Vlaue: ");
  scanf(" %d", &Exponent);

  for(i = 1; i <= Exponent; i++)
  {
  	pw = pw * Number;
  }

  printf("\n The Final result of %d Power %d = %ld", Number, Exponent, pw);

  return 0;
}
