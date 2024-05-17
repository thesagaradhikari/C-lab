#include <stdio.h>

int main() 
{

  int n, i, flag = 0;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  if(n<=0)
  printf("The number is %d\n",n);
  if(n==1)
  printf("%d is neither prime nor composite",n);
  if(n==2)
  printf("%d is the smallest and only even prime number\n",n);
  if(n>=3)
  {
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    
    }
    if(flag == 0)
    printf("%d is a oprime number",n);
    else 
    {
        printf("%d is not a prime number",n);
        if(n%2==0)
        printf("%d is an even number",n);
        else 
        {
            printf("%d is an odd number",n);
        }


    }    
  
  }


  return 0;
}
