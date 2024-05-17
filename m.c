#include <stdio.h>
void getMatrixElements(int matrix[][10], int row, int column) {
printf("\nEnter elements: \n");
for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         printf("Enter a%d%d: ", i + 1, j + 1);
         scanf("%d", &matrix[i][j]);
      }
   }
}
void multiplyMatrices(int first[][10],int second[][10],int result[][10],int r1, int c1, int r2, int c2) {

   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         result[i][j] = 0;
      }
   }

    for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         for (int k = 0; k < c1; ++k) {
            result[i][j] += first[i][k] * second[k][j];
         }
      }
   }
}
void display(int result[][10], int row, int column) {

   printf("\nOutput Matrix:\n");
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         printf("%d  ", result[i][j]);
         if (j == column - 1)
            printf("\n");
      }
   }
}

int main() {
   int first[10][10], second[10][10], result[10][10], m, n, p, q;
   printf("Enter rows and column for the first matrix m*n:\n");
   scanf("%d %d", &m, &n);
   printf("Enter rows and column for the second matrix p*q:\n");
   scanf("%d %d", &p, &q);
   if (n != p) {
      printf("Calculation cannot be performed.\n");
   }
   getMatrixElements(first, m, n);
   getMatrixElements(second, p, q);
   multiplyMatrices(first, second, result, m, n, p, q);
   display(result, m, q);

   return 0;
}
