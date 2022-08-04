#include <stdio.h>

void reverse () {

  int n, reverse = 0, remainder;

  printf("\n\n Enter an integer to reverse: \n\n ");
  scanf("%d", &n);

  while (n != 0) {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("\n\n Reversed number = %d \n\n", reverse);

  // return 0;
}
