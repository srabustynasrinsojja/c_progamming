#include<stdio.h>
int main()
{
    int k,i,j,x=0,M[5][3],max,h[100];

    for(i=0;i<5;i++){
    printf("Enter the marks of student-%d:",i+1);
    for(j=0;j<3;j++){
        scanf("%d",&M[i][j]);
        }
    }
    for(i=0;i<5;i++){
    for(j=0;j<3;j++){
         max=M[i][j];
         for(k=0;k<3;k++){
            if(M[i][k] > max)
                {max=M[i][k];
                h[i]=k;}
            }
        }
    }
    for(i=0;i<5;i++){
    {
            if(h[i]==0)
              {
                printf("Maximum marks of student-%d is %d in chemistry\n",i+1,M[i][h[i]]);
              }
            else if(h[i]==1)
              {
                printf("Maximum marks of student-%d is %d in chemistry\n",i+1,M[i][h[i]]);
              }
            else if(h[i]==2)
              {
                printf("Maximum marks of student-%d is %d in chemistry\n",i+1,M[i][h[i]]);
              }
        }
    }
    return 0;


}
