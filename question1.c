#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter n: \n");
    
    for(i=0;i<10;i++)
    {scanf("%d",&n);
    sum=sum+n;}
    printf("sum=%d\n",sum);
    printf("average=%.2f",(float)sum/10);//koiiii

}