#include<stdio.h>
#include<conio.h>
struct
 {
  int roll;
  char name[25];
  char add[30];
  long phone;
  }std;
void main()
{
  char ch='y';
  FILE *fp;
  fp=fopen("d:\\cprg\student.txt","w");
  clrscr();
  while(ch=='y' || ch=='Y')
  {
  printf("\n Enter roll number: ");
  scanf("%d",&std.roll);
  printf("\n Enter name: ");
  scanf("%s",std.name);
  printf("\n Enter address: ");
  scanf("%s",std.add);
  printf("\n Enter phone number: ");
  scanf("%ld",&std.phone);
 fprintf(fp,"%d\t%s\t%s\t%ld\n",std.roll,std.name,std.add,std.phone);
  printf("DO you want to continue (Y/N)? ");
  ch=getche();
  }
  fclose(fp);
  fp=fopen("d:\\cprg\student.txt","r");
  printf("\nRoll\tName\tAddress\tPhone\n");
 while(fscanf(fp,"%d%s%s%ld",&std.roll,std.name,std.add,&std.phone)!=EOF)
 printf("%d\t%s\t%s\t%ld\n",std.roll,std.name,std.add,std.phone);
  fclose(fp);
  getch();
  }