#include<stdio.h>
int main()

 {
int n, i;
 printf("Enter a positive integer: ");
  scanf("%d", &n);

   for (i = 2; i <= n-1; ++i)
     {
      if (n % i == 0)
        {
      printf("%d is not prime number.\n",n);
      break;
       }
     }

  if(i==n)
    printf("%d is prime number.",n);
  return 0;
   }
