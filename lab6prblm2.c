#include<stdio.h>
int main()
{
    int x,y,z,*p1,*p2,*p3;
    p1=&x;
    p2=&y;
    p3=&z;
    printf("Enter 3 numbers:\n");
      scanf("%d %d %d",p1,p2,p3);
    printf(" inputed numbers are:%d %d %d\n",*p1,*p2,*p3);
    if(*p1>*p2 && *p1>*p3)
        printf("Maximum is %d",*p1);
     else if(*p1<*p2 && *p2>*p3)
        printf("Maximum is %d",*p2);
    else
        printf("Maximum is %d",*p3);

}
