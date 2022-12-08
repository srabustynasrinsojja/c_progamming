#include<stdio.h>
int main()
{
    int i,n,x=1;
    printf("Enter power:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        x=x*3;
    }
    printf("%d",x);
    return 0;
}
