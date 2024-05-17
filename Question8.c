//WAP to illustrate the concept of global and static variables.
#include<stdio.h>
int a,b=10;//global variable have defult value 0
void function_1()
{
    printf("(global)from function_1 a=%d\tb=%d\n",a,b);
}
void function_2()
{
    a=20;
    b=30;
    printf("(global)from function_2 a=%d\tb=%d\n",a,b);
}
void function_3()
{
    printf("(global)from function_3 a=%d\tb=%d\n",a,b);
}

// function containing static variable count
void counter()
{

//Declaration of static variable count
static int count;
count++;
printf("(static)Call to counter() %d time.\n",count);
}
int main()
{
    counter();
    counter();
    printf("(global)from main function a=%d\tb=%d\n",a,b);
    function_1();
    function_2();
    a=25;
    function_3();
    function_1();
    return 0;


}