#include<stdio.h>
int main()
{
    int number;
    printf("Enter any number:");
    scanf("%d",&number);
    if (number>0)
    printf("The number is positive");
    else if(number<0)
    printf("The number is Negative");
    else if(number==0)
    printf("The number is zero");
    return 0;
}