#include<stdio.h>
int main()
{
    int i,n,N,count[10]={0};
    scanf("%d",&n);
    while(n!=0)
    {
      for(i=0;i<=9;i++)
        if(n%10==i)
            count[i]++;

 n=n/10;
    }
    for(i=0;i<=9;i++){
        printf("%d\t",count[i]);
    }
    return 0;
}
