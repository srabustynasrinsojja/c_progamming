#include<stdio.h>
int main()
{
    int x,y,n,i=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
    {
       for(y=1;y<=x;y++)
        {
          i=i+1;
          printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
