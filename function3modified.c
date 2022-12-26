#include<stdio.h>
void fibonacci(int x )
{
    int i,f1=0,f2=1,f3=0;
    printf("your expected Fibonacci series is:");
    for(i=0;i<x;i++)
    {
        printf("%d  ",f3);
        f1=f2;
        f2=f3;
        f3=f1+f2;
    }
}
int main()
{
    int n;
    scanf("Enter the size of the series:");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
