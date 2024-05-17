#include <stdio.h>

int main()
{   
    int num, sum = 0;
    float avg;
    
    printf("Please Enter the 10 Numbers\n");
    for(int i = 1; i <= 10; i++)
    {
        printf("Number %d = ", i);
        scanf("%d", &num);
        sum = sum + num;
    }

    avg = sum / 10;

    printf("\nThe Sum of 10 Numbers     = %d", sum); 
    printf("\nThe Average of 10 Numbers = %.2f\n", avg);
}