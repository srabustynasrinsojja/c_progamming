#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       for(j=5;j>=i;j--){
            printf("%d",j);
        }
                    printf("\n");
    }
    return 0;
}


