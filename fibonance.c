#include <stdio.h>
void fibo () {

  int i, n;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  printf("\n\n Enter the number of intergers to check fibonance: \n\n ");
  scanf("%d", &n);

  // print the first two terms t1 and t2
  printf("\n\n Fibonacci Series: %d, %d, ", t1, t2);

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("\n\n %d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  // return 0;
}

