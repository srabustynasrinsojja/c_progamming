#include <stdio.h>
int main()
{
    int n;
    printf("How many integers?\n");
    scanf("%d",&n);
    int A[n],*a,i,s=0;
    a=&A[0];
    float avg,d,f;
    printf("Enter the values\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",(a+i));
        s+=*(a+i);
    }
    avg=s/(float)n;
    printf("The avg= %f\n",avg);
    for(i=0; i<n; i++)
    {
        d=(avg-*(a+i));
        f=abs(d);
        printf("The difference between A[%d] and the Mean= %f\n",i+1,f);
    }
    return 0;
}
