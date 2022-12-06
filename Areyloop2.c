#include<stdio.h>
int main()
{
    int i,n,A[100],B[100],C[100];
    printf("enter the value og n:");
    scanf("%d",&n);
     for(i=0;i<n;i++){
        scanf("%d",&A[i]);
        }
        printf("Number\tSquare\tcube\n");
    for(i=0;i<n;i++){
        B[i]=pow(A[i],2);
        C[i]=pow(A[i],3);
        printf("%d\t%d\t%d\n",A[i],B[i],C[i]);
    }

        return 0;
}
