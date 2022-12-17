#include<stdio.h>
int main()
{
    int A[10],p,i,sum=0,n;
    p=&A[0];
    float avg,diff;
    printf("How many integers?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
        sum=sum+(p+i);
    }
    avg=(float)sum/n;
    for(i=0;i<n;i++){
    diff=abs(avg-(p+i));
    printf("Different between average and %d is %f/n",(p+i),diff);
   }
return 0;
}
