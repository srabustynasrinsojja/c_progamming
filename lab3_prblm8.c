#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Please enter a");
    scanf("%d",&a);
    printf("Please enter b");
    scanf("%d",&b);
    printf("Please enter c");
    scanf("%d",&c);{
        if(a>b && a>c)
        printf("Max= %d",a);
        else if(b>a && b>c)
        printf("Max= %d",b);
        else
        printf("Max= %d",c);}{
    if(a<b && a<c)
        printf("Min= %d",a);
        else if(b<a && b<c)
        printf("Min= %",b);
        else
        printf("Min= %d",c);}
        return 0;


}

