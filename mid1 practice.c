#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Please enter a");
    scanf("%d",&a);
    printf("Please enter b");
    scanf("%d",&b);
    printf("Please enter c");
    scanf("%d",&c);

       if(a>b && a>c)
        printf("Max= %d\n",a);
        else if(b>a && b>c)
        printf("Max= %d\n",b);
        else
        printf("Max= %d\n",c);

     if(a<b && a<c)
        printf("Min= %d",a);
        else if(b<a && b<c)
        printf("Min= %\n",b);
        else
        printf("Min= %d\n",c);

       if(a<b && b<c)
        printf("Median=%d\n",b);
        else if(b>c && c>a)
        printf("Median = %d\n",c);
        else
        printf("Median =%d\n",a);
        return 0;


}

