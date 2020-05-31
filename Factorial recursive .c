#include<stdio.h>
int factorial(int n)
  {
      int fact;
      if(n==1)
        return 1;
      else
      {
          fact=n*factorial(n-1);
      }
  }
void main()
  {
      int n;
      printf("Enter a number : ");
      scanf("%d",&n);
      printf("\nThe factorial of %d : %d",n,factorial(n));
  }
