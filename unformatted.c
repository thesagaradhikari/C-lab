#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    printf("Enter name here: ");
    gets(str1);
    printf("Enter address here: ");
    gets(str2);
    printf("The name you entered is ");
    puts(str1);
    printf("The address you entered is ");
    
    puts(str2);
}