#include<stdio.h>
int main()
{
    int x,y,A[9],B[9]={0};
    int *p,*q;
    for(x=0;x<9;x++){
    scanf("%d",&A[x]);
    }
    p=&A[0];
    q=&B[0];
    for(x=0,y=9;x<9,y>=0;x++,y--){
     *p=*q;
     p++;
    q--;

    }
    for(x=0;x<9;x++){
        printf("%d",*p);
        printf("%d",*q);
        p++;
        q++;
    }

}
