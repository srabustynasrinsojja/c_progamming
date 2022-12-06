#include <stdio.h>
int main()
{
   int n,x=1,s,r,c;
   printf("Enter the number of rows: ");
   scanf("%d",&n);
   for (r=0; r<n; r++)
    {
     for (s=1; s<=n-r; s++)
        printf(" ");
      for (c=1; c<=r; c++) {
         if (r==0 || c==0)
            x=1;
         else
            x=x*(r-c+1)/c;
         printf("%d ",x);
      }
      printf("\n");
   }
   return 0;
}
