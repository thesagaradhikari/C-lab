#include<stdio.h>
int main()
{
    int  n;
    float i,sum=0;
    printf("give value to n: 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n: ");
    scanf("%d",&n);
    for ( i=1;i<=n;i++)
        sum=sum+1/i;
    printf("sum=%.2f",sum);
}