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

     printf("Enter B matrix:");
    for(r=0;r<i;r++){
        for(c=0;c<j;c++){
            printf("Enter B[%d][%d]=",r,c);
             scanf("%d",& B[r][c]);
        }
     }
     for(r=0;r<i;r++){
        for(c=0;c<j;c++){
        C[r][c]=0;
        for(k=0;k<j;k++){
          C[r][c]=A[r][k]*B[k][c];
        }
        printf("%d\t",C[r][c]);
     }
     printf("\n");
     }
     return 0;
}

