/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1,sub2,total;
  float average;

  printf("enter first subject marks: ");
  scanf("%d",&sub1);

  printf("enter second subject marks: ");
  scanf("%d",&sub2);
  total=sub1+sub2;
  printf("\ntotal marks: %d",total);
  average=total/2.0;

  printf("\naverage mark is: %.2f",average);

  
  return 0;
}

