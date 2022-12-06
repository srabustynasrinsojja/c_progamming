
#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
     for(i=n-1;i>=1;i--){

        for(j=7;j>=i;j--){
            printf("%d",j);
        }
                    printf("\n");
    }


    return 0;
}
