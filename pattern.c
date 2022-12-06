#include<stdio.h>
int main()
{
    int n,i,j,k,l;

    printf("input n: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf("  ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d ",k=i+j-1);

        }
        for(j=1; j<i; j++)
        {
            printf("%d ",l=k-j);
        }
        printf("\n");
    }


}
