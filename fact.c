#include <stdio.h>
void factorial () {
    int n, i;
    unsigned long long fact = 1;
    printf("\n\n Enter an number to check the factorial:\n\n ");
    scanf("%d", &n);

    // shows error if the user enters a negative integer
    if (n < 0)
        printf("\n\n Error! Factorial of a negative number doesn't exist.\n\n");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("\n\n Factorial of %d = %llu \n\n", n, fact);
    }

    // return 0;
}

