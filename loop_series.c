#include<stdio.h>
int main()
{
    int i,n,d=0,sum=0;
    printf("Enter numbers:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i+d;
        d=d+1;
    }
    printf("Sum=%d",sum);
    return 0;
}
