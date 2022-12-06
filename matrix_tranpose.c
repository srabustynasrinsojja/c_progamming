#include<stdio.h>
int main()
{
     int A[5][5],B[5][5],i,j,r,c,k,C[5][5];

    printf("Enter the number of row and column:");
    scanf("%d %d",&i,&j);

    printf("Enter A matrix:");
    for(r=0;r<i;r++){
        for(c=0;c<j;c++){
            printf("Enter A[%d][%d]=",r,c);
             scanf("%d",& A[r][c]);
        }
     }
     for(r=0;r<i;r++){
        for(c=0;c<j;c++){
            printf("%d\t", A[r][c]);
        }
        printf("\n");
     }

printf("transpose matrix of A is:\n");
 for(r=0;r<j;r++){
        for(c=0;c<i;c++){
            printf("%d\t",A[c][r]);
        }
        printf("\n");
}

}
