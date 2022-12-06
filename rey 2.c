#include <stdio.h>
int main()
{
    int n,;
    printf("How many integers?\n");
    scanf("%d", &n);
    int a[n],i,j;
    printf("Enter the integers in the ascending order, please.\n");
    for(i=1; i<=n; i++)
    scanf("%d", &a[i]);
    if(n%2==0)
    {
        for(i=n,j=1; j<=n/2; i--,j++)
        printf("%d %d ",a[i],a[j]);
    }
    else
    {
        for(i=n,j=1; j<=n/2+1; i--,j++)
        {
            if(j==n/2+1)
            {
                printf("%d",a[i]);
                break;
            }
            printf("%d %d ",a[i],a[j]);
        }
    }
    return 0;
}
