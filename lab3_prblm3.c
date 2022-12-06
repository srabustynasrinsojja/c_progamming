#include<stdio.h>
int main()
{
    int a,b,Q,R;
    scanf("%d %d",&a,&b);
    if(b==0)
        printf("Sorry!!can't divide");
    else
         Q=a/b;
         R=a%b;
        printf("Q=%d ,R=%d",Q,R);
    return 0;

}




