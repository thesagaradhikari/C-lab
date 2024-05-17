//Write a program to add, subtract, multiply and divide two integers using user defined 
//function add(), sub(), mul() and div()
#include<stdio.h>

// functions declaration
int add(int n1, int n2);
int sub(int n1, int n2);
int mul(int n1, int n2);
float div(float n1, float n2);

// main function
int main()
{
  int num1, num2;

  printf("Enter two numbers: \n");
  scanf("%d %d", &num1, &num2);

  printf("%d + %d = %d\n", num1, num2, add(num1, num2));
  printf("%d - %d = %d\n", num1, num2, sub(num1, num2));
  printf("%d * %d = %d\n", num1, num2, mul(num1, num2));
  printf("%d / %d = %.3f\n", num1, num2, div(num1, num2));

  return 0;
}

// function to add two integer numbers
int add(int n1, int n2)
{
  int result;
  result = n1 + n2;
  return result;
}

// function to subtract two integer numbers
int sub(int n1, int n2)
{
  int result;
  result = n1 - n2;
  return result;
}

// function to multiply two integer numbers
int mul(int n1, int n2)
{
  int result;
  result = n1 * n2;
  return result;
}

// function to divide two integer numbers
float div(float n1, float n2)
{
  float result;
  result = n1 / n2;
  return result;
}