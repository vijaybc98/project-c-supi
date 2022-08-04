#include <stdio.h>
void sumof2numbers () {    

    int number1, number2, sum;
    
    printf("\n\n Enter two integers to find the sum:\n\n ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("\n\n %d + %d = %d", number1, number2, sum);
    // return 0;
}

