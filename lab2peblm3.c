#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;
    printf("Enter x=");
    scanf("%f",&x);
    y=((3*x*x*x*x*x)-sqrt(x)*5-sin(x)*6);
    printf("f(x)=%f",y);
    return 0;

}
