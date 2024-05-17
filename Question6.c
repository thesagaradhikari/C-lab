#include <stdio.h>
#include<math.h>
int main()
{
    float i, j, n, fact;
    float x, p, sum = 0;
    printf("x + x2/2! + x3/3! + x4/4! + x5/5! ... xn/n!");
     printf("\nEnter the value of x : ");
    scanf("%f", &x);
    printf("Enter the value of n : ");
    scanf("%f", &n);
    for (i =1 ; i <= n; i ++)
    {
      p=pow(x,i);
      fact=1;
    for (j =1 ; j <= i; j ++)
        fact = fact *j ;
        sum +=p/ fact; 
    }
    printf("sum = %f",sum);
    return 0;
}