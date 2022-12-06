#include<stdio.h>
int main()
{
    int x[10],y[10],r[4]={0},i,n;
    scanf("%d",&n);
    printf("Enter the value of x,y:");
    for(i=0;i<n;i++){
    scanf("%d %d",&x[i],&y[i]);
    if(x[i]>0 && y[i]>0)
        r[0]++;
    else if(x[i]<0 && y[i]>0)
        r[1]++;
    else if(x[i]<0 && y[i]<0)
        r[2]++;
      else  if(x[i]>0 && y[i]<0)
        r[3]++;
    }
    for(i=0;i<4;i++){
        printf("%d\t",r[i]);}
    return 0;
}
