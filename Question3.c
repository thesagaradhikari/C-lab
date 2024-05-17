#include<stdio.h>  
 
int main()  
{  
    int num1, num2, i, temp,count=0;  
    printf("Enter start and end value\n");  
    scanf("%d%d", &num1, &num2);  
    if(num1 > num2)  
    {  
        temp  = num1;  
        num1 = num2;  
        num2   = temp;  
    }  
    printf("Even numbers between %d and %d are:\n", num1, num2);  
    for(i = num1; i <= num2; i++)  
    {  
        if(i % 2 == 0)  
        {  
            printf("%d\n", i); 
            count++;
             
        }  
    } printf("the count is:%d",count);

  
    return 0;  
}  