#include<stdio.h>
int main()
{
    int i,j,k,marks[10][3],sum[3]={0},avg[3]={0},count[3]={0};
    for(i=0;i<10;i++){
        for(j=0;j<3;j++){
            printf("Enter the marks of student %d in Exam %d:",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
   for(k=0;k<3;k++){
        for(i=0;i<10;i++){
                sum[k]=sum[k]+marks[i][k];
        }
   }
        for(j=0;j<3;j++){
                avg[i]=sum[i]/10;}

   for(k=0;k<3;k++){
      for(i=0;i<10;i++){
            if(marks[k][i]>avg)
            count[i]++;
      }
   }

    for(k=0;k<3;k++){
        printf("%d ",count[i]);
    }
    return 0;
}
