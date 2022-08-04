#include <stdio.h>
void biggest3 () {

  double n1, n2, n3;

  printf("\n\n Enter three different numbers to check the biggest of 3 : \n\n ");
  scanf("%lf %lf %lf", &n1, &n2, &n3);

  // if n1 is greater than both n2 and n3, n1 is the largest
  if (n1 >= n2 && n1 >= n3)
    printf("\n\n %.2f is the largest number.\n\n", n1);

  // if n2 is greater than both n1 and n3, n2 is the largest
  if (n2 >= n1 && n2 >= n3)
    printf("\n\n %.2f is the largest number.\n\n", n2);

  // if n3 is greater than both n1 and n2, n3 is the largest
  if (n3 >= n1 && n3 >= n2)
    printf("\n\n %.2f is the largest number.\n\n", n3);

  // return 0;
}
