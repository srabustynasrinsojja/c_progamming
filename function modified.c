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
/*int factor(int x){
int n;
int i;
for(i=2;i<x/2;i++){
    if(x%i==0){
    n=i;
    break;
    }
}
    printf("\nMinimum factor is %d",n);
    return 0;

}*/
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    prime(x);
    //factor(x);
    return 0;
}
