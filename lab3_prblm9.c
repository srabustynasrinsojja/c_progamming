#include<stdio.h>
int main()
{
    int x,y;
    printf("Please enter x ,y:");
    scanf("%d %d",&x,&y);
    if(x>0 && y>0)
        printf("This point is in Region 1");
    if(x<0 && y>0)
        printf("This point is in Region 2");
    if(x>0 && y<0)
        printf("This point is in Region 3");
    else
        printf("This point is in Region 4");
        return 0;
}
