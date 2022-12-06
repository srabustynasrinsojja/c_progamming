#include<stdio.h>
int main()
{
    int i,n,m,max,g[4];

    printf("Enter the number of the students:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
            printf("Enter the marks of student %d:",i+1);
            scanf("%d",&m);
            if(m>=90 && m<=100)
                g[0]=g[0]+1;
            if(m>=80 && m<=90)
                g[1]=g[1]+1;
            if(m>=0 && m<=100)
                g[2]=g[2]+1;
            if(m>=90 && m<=100)
                g[3]=g[3]+1;
         int max=g[0];   }
    for(i=1;i<4;i++)
       {
        if(g[i]>max)
           {
            max=g[i];
                }
            }
            printf("%d",max);
return 0;

}
