#include<stdio.h>
int main()
{
    int M[6][3],i,j,max[6]={0},C[3],k;
    for(i=0;i<6;i++){
    printf("\nEnter the marks of student %d:",i+1);
     for(j=0;j<3;j++){
       scanf("%d",&M[i][j]);}
 }

  for(i=0;i<6;i++){
       max[0]=M[0][i];}

for(i=0;i<6;i++){
    for(j=0;j<3;j++){
        if(M[i][j]>max[i])
        max[i]=M[i][j];
        C[k]=j;}
}
if(C[k]==0)
    for(i=0;i<6;i++){
printf("maximum number of student%d is%d in Physics.\n",i+1,max[i]);
}
else if(C[k]==1)
    for(i=0;i<6;i++){
printf("maximum number of student%d is%d in chemistry.\n",i+1,max[i]);
}
else if(C[k]==2)
    for(i=0;i<6;i++){
printf("maximum number of student%d is%d in math.\n",i+1,max[i]);

}


return 0;
}
