#include<stdio.h>
struct student {
  char name[50];
  float marks;
};
int main()
{
  
struct student students[100];
for (int i = 0; i <3; i++) {
  printf("Enter name of student %d: ", i+1);
  scanf("%s", students[i].name);
  printf("Enter marks of student %d: ", i+1);
  scanf("%f", &students[i].marks);
}
for (int i = 0; i <3; i++) {
  printf("Name: %s\n", students[i].name);
  printf("Marks: %.2f\n", students[i].marks);
}
return 0;
}