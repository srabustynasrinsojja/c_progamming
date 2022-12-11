#include<stdio.h>
int main()
{
    int i=3,j=2,*x,*y;
    x=&i;
    y=&j;
    printf("%p",x);
    printf("%p",y);
}

