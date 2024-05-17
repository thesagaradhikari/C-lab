#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the value of n: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("1");
      }
      printf(",");
   }
   return 0;
}