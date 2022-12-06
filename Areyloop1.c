#include<stdio.h>
int main()
{
    int i,A[100],count[6];
    for(i=0;i<6;i++){
        count[i]=0;
    }
    for(i=0;i<10;i++){
        scanf("%d",&A[i]);
        if(A[i]<0)
            count[0]=count[0]+1;
        else if(A[i]>=0 && A[i]<=100)
            count[1]=count[1]+1;
        else if(A[i]>=101 && A[i]<=200)
            count[2]=count[2]+1;
        else if(A[i]>=201 && A[i]<=300)
            count[3]=count[3]+1;
       else if(A[i]>=301 && A[i]<=400)
            count[4]=count[4]+1;
            else
                count[5]=count[5]+1;
        }
    for(i=0;i<6;i++){
       printf("%d",count[i]);
    }
        return 0;
}
