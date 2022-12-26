#include<stdio.h>
int sum_positive(int x,int y)
{
     int i,sum=0;
    for(i=0;i<y;i++)
    {
       if(*(x+i>0))
        sum=sum+*(x+i);
    }

}
int main()

{
    int i,n,A[10],*ptr,s;
    ptr=&A[0];
    printf("Enter data size:");
    scanf("%d",&n);
    printf("Input data :");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i));
    }
    s=sum_positive(*ptr,n);
    printf("%d",s);
    return 0;

}
