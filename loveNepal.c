#include<stdio.h>
int main()
{
    char a[]="I LOVE NEPAL";
    int i,j;
    for(i=0;i<=6;i++)
    {
        for(j=0;j>=i;j++)
        {
            if(i==1||i==2||i==3)
            printf("%c",a[j]);
        }
        printf("\n");
    }
}