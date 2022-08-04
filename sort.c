/*
     * C program to accept N numbers and arrange them in an ascending order
     */
 
    #include <stdio.h>
    void sortingnumbers ()
    {
 
        int i, j, a, n, number[30];
        printf("\n\n Enter the value of N \n");
        scanf("%d", &n);
 
        printf("\n\n Enter the numbers to sort in ascending order \n \n");
        for (i = 0; i < n; ++i)
            scanf("%d", &number[i]);
 
        for (i = 0; i < n; ++i) 
        {
 
            for (j = i + 1; j < n; ++j)
            {
 
                if (number[i] > number[j]) 
                {
 
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
 
                }
 
            }
 
        }
 
        printf("\n\n The numbers arranged in ascending order are given below \n");
        for (i = 0; i < n; ++i)
            printf("%d\n", number[i]);
 
    }
