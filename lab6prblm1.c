#include<stdio.h>
int main()
{
    int i,*p1;
    float f,*p2;
    double d,*p3;
    char m,*p4;
    p1=&i;
    p2=&f;
    p3=&d;
    p4=&m;
    printf("Enter an integer:");
    scanf("%d",&i);
    printf("Enter an float:");
    scanf("%f",&f);
    printf("Enter an double:");
    scanf("%lb",&d);
    printf("Enter an string:\n");
    scanf("%s",&m);
    printf("value and adress of the integer is %d and %p\n",*p1,p1);
    printf("value and adress of the float is %f and %p\n",*p2,p2);
    printf("value and adress of the double is %lb and %p\n",*p3,p3);
    printf("value and adress of the string is %s and %p",*p4,p4);
    return 0;


}
