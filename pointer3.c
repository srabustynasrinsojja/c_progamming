#include<stdio.h>
int main()

{
    int i,j,temp;
    int *x,*y;
    x=&i;
    y=&j;
    printf("Enter the value of i and j:");
    scanf("%d %d",&i,&j);
    printf("%d %d\n",*x,*y);

    temp=*x;
    *x=*y;
    *y=temp;
    printf("%d %d",*x,*y);


}
