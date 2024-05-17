#include<stdio.h>
#include<conio.h>

int main()
{
 char a[]="I LOVE NEPAL";
 int i,j;
 for(i=1;i<6;i++)
 {
  for(j=0;j<=i;j++)
    {
      if(i<=12)
       {
        printf("%c",a[j]);
       }
    }
    printf("\n");
 }
 for(i=1;i>=6;i++)
 {
  for(j=0;j<=i;j++)
    {
      if(i<=12)
       {
        printf("%c",a[j]);
       }
    }
    printf("\n");
 }
}