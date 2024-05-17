/*WAP to input a integer number in main(). Write a user define function isPrime() to 
calculate whether the number is prime of not. Print whether the number is prime or 
not from the main().*/
#include<stdio.h>
int Prime(int number)
{
  int flag = 0;

  for(int i=2; i<=number/2; i++)
  {
     if(number%i == 0)
     {
       flag=1;
       break;
     }
  }

  if(number == 1) flag = 1;

  return flag;
}

int main()
{
  int number ;

  printf("Enter number: ");
  scanf("%d",&number);

  if(Prime(number) == 0)
  printf("%d is a prime number.", number);
  else
  printf("%d is not a prime number.", number);

  return 0;
}