#include <stdio.h>
void biggest ()
{
    int num1, num2;
    // Ask user to enter the two numbers
    printf("Please Enter Two numbers to compare biggest of 2 \n\n");
    // Read two numbers from the user
    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
    {
        printf("%d is Largest\n\n", num1);
    }
    else if (num2 > num1)
    {
        printf("%d is Largest\n\n", num2);
    }
    else
    {
        printf("Both are Equal\n\n");
    }
   // return 0;
}
