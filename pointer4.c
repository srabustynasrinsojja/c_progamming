#include<stdio.h>
int main()
{
    int x,A[9];
    int *p;
    for(x=0;x<9;x++){
    scanf("%d",&A[x]);
    }
    p=&A[0];
    for(x=0;x<9;x++){
        printf("%d ",*p);
        p++;
    }
    printf("\n");
        for(x=0;x<9;x++){
        printf("%p ",p);
        p++;
    }

}
