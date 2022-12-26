#include<stdio.h>
int sum_positive(int *p,int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
      if(*(p+i)>0)
      {
        sum=sum+*(p+i);
      }
    }
    return sum;
}
int main()
{
    int i,A[10],*p,n,s;
    //p=&A[0];
    printf("Input data size:");
    scanf("%d",&n);
    p=&A[0];
    printf("Input data:");
    for(i=0;i<n;i++)
    {
    scanf("%d",p+i);
    }
    s=sum_positive(p,n);
    printf("%d",s);
    return 0;
}
