#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],r,c,i,j;
    printf("Hi there!\nwanna transpose a matrix?\n");
    printf("Enter rows:");
    scanf("%d",&i);
    printf("Enter column:");
    scanf("%d",&j);
    printf("Enter the matrix:\n");
    for(r=0;r<i;r++)
     {
       for(c=0;c<j;c++)
        {
           printf("A[%d][%d]:",r+1,c+1);
           scanf("%d",&A[r][c]);
        }
     }
      for(r=0;r<i;r++)
     {
       for(c=0;c<j;c++)
       {
           printf("%d\t",A[r][c]);
        }
        printf("\n");
     }

printf("Transpose of A:\n");
   for(c=0;c<j;c++)
     {
       for(r=0;r<i;r++)
       {
           printf("%d\t",A[r][c]);
        }
        printf("\n");
     }
     return 0;
}

