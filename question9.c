#include <stdio.h>

int main()
{
   int prvevious=0,present=1,term,i,n;
   printf("Input number of terms to  display : ");
   scanf("%d",&n);
   printf("Here is the Fibonacci series upto  to %d terms : \n",n);
   printf("% 5d % 5d", prvevious,present);
 
  for(i=3;i<=n;i++)
   {
     term=prvevious+present;
     printf("% 5d",term);
     prvevious=present;
     present=term;
   }
   printf("\n");
}