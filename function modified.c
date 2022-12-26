#include<stdio.h>
int prime(int x){
   int i;
    for(i=2;i<x/2;i++)
    {
       if(x%i==0){
         printf("%d is not prime.\nMinimum factor is %d",x,i);
         return i;
         }
    }
   printf("%d is prime",x);

}

int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    prime(x);
    return 0;
}
