#include<stdio.h>
int main()
{
   float x,y,z,V;
    printf("Enter height of the box:");
    scanf("%f",&x);
    printf("Enter length of the box:");
    scanf("%f",&y);
    printf("Enter width of the box:");
    scanf("%f",&z);
    V=x*y*z;
    printf("Volume(cubic inches):%f",V);
    return 0;
}
