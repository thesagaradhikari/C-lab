#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fptr ;
    int i, n=2 ;
    float  salary ;
    char name[10] ,post[11];
    fptr = fopen("EMPLOYEE.DAT", "w") ;
       for(i = 0 ; i < n ; i++)
    {
        
        printf("\nEnter the name : ") ;
        scanf("%s",&name) ;
        printf("Enter the post : ") ;
        scanf("%s",&post) ;
        printf("Enter the salary : ") ;
        scanf("%f",&salary) ;
        fprintf(fptr, " %s %s %f", name, post, salary) ;
    }
    fclose(fptr) ;
    fptr = fopen("EMPLOYEE.DAT", "r") ;
    printf("S.No.\tempName\tpost\tSalary\n");
    for(i = 0 ; i < n ; i++)
    {
        fscanf(fptr," %s %s %f ", &name, &post, &salary) ;
        printf("%d.\t%s\t%s\t%.2f \n",i, name, post, salary) ;
    }

   return 0;
}