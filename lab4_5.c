#include<stdio.h>
int main()
{
    int x,y,i,j=0;
    printf("Enter 2 years:");
    scanf("%d %d",&x,&y);
    for(i=x;i<=y;i++)
    {
        if(i%4==0)
           {
            printf("%d is leap year",i);
           }
        else if(i%400==0)
           {
            printf("%d is leap year",i);
           }
    }
    return 0;
}
