#include<stdio.h>
int main()
{
    int i,j,*s,*S,k;
    scanf("%d %d",&i,&j);
    s=&i;
    S=&j;
    k=*s+*S;
    printf("%p\n",s);
    printf("%p\n",S);
    *s=20;
    printf("%p",k);

}
