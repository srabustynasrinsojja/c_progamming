#include<stdio.h>
int factorial(int x)
{
    int i;
    int f=1;
    for(i=1;i<=x;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
   int x,fact;
   printf("Enter a number:") ;
   scanf("%d",&x);
   fact=factorial(x);
   printf("factorial of %d is %d",x,fact);
   return 0;
}
