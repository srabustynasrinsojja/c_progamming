#include<stdio.h>
int main()
{
    float n,i,x,c=0,A;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
   {
       scanf("%f",&x);
        c=c+x;
        A=(c)/3.0;
   }
    printf("Average of 3 points:%f",A);
    return 0;
}
