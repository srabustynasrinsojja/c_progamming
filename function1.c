#include<stdio.h>
void prime(int x)
{
    int i;
    for(i=2;i<x/2;i++)
    {
        if(x%i==0)
        {
            printf("%d is not prime.\n%d is the minimum factor.",x,i);
            break;
        }
        else
            printf("%d is prime.",x);
            break;
    }

    return i;
}
int main()
{
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    prime(x);
    return 0;
}
