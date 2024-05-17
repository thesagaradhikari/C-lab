#include<stdio.h>
     
int main()
{
int n,i,j,fact=1;
float sum=0;
printf("\n Enter Value of n  1 + 1/2! + 1/3! + 1/4! + 1/5! ... 1/n!: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    fact=1;
    for(j=i;j>0;j--)
    {
        fact=fact * j;
     }
    sum=sum+(1.0/fact);
}
printf("\n Sum of Series = %.3f",sum);
return 0;
}