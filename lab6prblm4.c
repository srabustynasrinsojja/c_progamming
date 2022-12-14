#include<stdio.h>
int main()
{
    int A[50],i,*p,sum=0,avg,n,diff;
    p=&A[0];
    printf("Enter the numbers of elements of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",p+i);
        sum=sum+*(p+i);
    }
    avg=sum/n;
   // printf("%d",avg);
   for(i=0;i<n;i++){
    diff=abs(avg-*(p+i));
   printf("Difference between average and element %d is %d\n",i+1,diff);
   }
}
