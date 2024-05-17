#include<stdio.h>
void insert(int arr[],int new,int pos)
{
    int i;
    for(i=6;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=new;
    printf("The new elements are:\n");
     for(i=0;i<6+1;i++)
    {
        printf("[%d]%d\t",i,arr[i]);
    }
}

int main()
{
    int num[6]={20,30,40,60,80,90};
    int i,userInput,position;
    printf("The elements are \n");
    for (i=0;i<6;i++)
    {
        printf("[%d]%d\t",i,num[i]);
    }
    printf("\nEnter the new element to be inserted: ");
    scanf("%d",&userInput);
    printf("Enter the position of new element to be inserted: ");
    scanf("%d",&position);
    insert(num,userInput,position);
}