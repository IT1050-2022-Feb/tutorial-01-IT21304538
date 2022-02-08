/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int a, int x);
int maximum(int b,int y);
int multiply(int c,int z);

int main() {
   int no1, no2;
   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));
   return 0;
}
int minimum(int a,int x)
{
  if(a > x)
  {
    return x;
  }
  else
  {
    return a;
  }
}
int maximum(int b, int y)
{
  if(b > y)
  {
    return b;
  }
  else
  {
    return y;
  }
}
int multiply(int c,int z)
{
  return c*z;
}