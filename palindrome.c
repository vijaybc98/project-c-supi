#include <stdio.h>
void palindrome () {
  int n, reversed = 0, remainder, original;
    printf("\n\n Enter an integer to check palindrome: \n\n ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed)
        printf("\n\n %d is a palindrome.\n\n", original);
    else
        printf("\n\n %d is not a palindrome.\n\n", original);

   // return 0;
}
