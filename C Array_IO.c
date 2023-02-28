#include <stdio.h>

int main() {
   int i, j;
   float marks[10][5];

   // Input marks for 10 students
   for (i = 0; i < 10; i++) {
      printf("Enter marks for student %d: ", i+1);
      for (j = 0; j < 5; j++) {
         scanf("%f", &marks[i][j]);
      }
   }

   // Output the marks
   for (i = 0; i < 10; i++) {
      printf("Marks for student %d: ", i+1);
      for (j = 0; j < 5; j++) {
         printf("%.2f ", marks[i][j]);
      }
      printf("\n");
   }

   return 0;
}
