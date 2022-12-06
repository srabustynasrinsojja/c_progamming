
#include<stdio.h>
int main()
{
    int A[3][3],B[3][3],C[3][3],r,c,k;
    for(r=0;r<3;r++)
     {
       for(c=0;c<3;c++)
        {
           scanf("%d",&A[r][c]);
        }
     }

   for(r=0;r<3;r++)
     {
       for(c=0;c<3;c++)
       {
           scanf("%d",&B[r][c]);
       }
     }

     for(r=0;r<3;r++)
     {
       for(c=0;c<3;c++)
       {
           C[r][c]=0;
           for(k=0;k<3;k++)
           {
             C[r][c]=C[r][c]+A[r][k]*B[k][c];
           }
         printf("%d\t",C[r][c]);
       }
       printf("\n");
     }
     return 0;
}
