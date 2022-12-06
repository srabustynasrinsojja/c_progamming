#include<stdio.h>
int main()
{
   int i=20,s=0;
   for(; i<=120; i++){
        if(i%5==0 && i%3==0)
        printf("%d\n",i);
        s=s+i;
   }

    printf("%d",s);

    return 0;
}
