#include<stdio.h>
int main()
{
    int x[100],y[100],count[4],n,i;
        scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter x and y:");
        scanf("%d %d",&x[i],&y[i]);
          count[4]=0;
           if(x[i]>0 && y[i]>0)
            count[0]=count[0]+1;
          else if(x[i]<0 && y[i]>0)
            count[1]=count[1]+1;
          else if(x[i]>0 && y[i]<0)
            count[2]=count[2]+1;
         else if(x[i]<0 && y[i]<0)
           count[3]=count[3]+1;
          }
      for(i=0;i<4;i++){
            printf("%d\t",count[i]);
            }
return 0;
}
