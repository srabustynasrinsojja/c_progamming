#include<stdio.h>
int fibonacchi(int x)
{
    int i;
    int temp;
    int f3;
    int f1=0;
    int f2=1;
    printf("%d %d ",f1,f2);
    for(i=0;i<x;i++){
        f3=f1+f2;
        f1=f2;
        f2=f3;
        printf("%d ",f3);
    }
   return f3;
}

int main()
{
    int x;
    printf("Enter the size of the series:");
    scanf("%d",&x);
    fibonacchi(x);
    return 0;

}
