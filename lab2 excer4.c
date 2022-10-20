#include<stdio.h>
int main()
{
    float x1,x2,y1,y2,d;
    printf("Enter the value of X1:");
    scanf("%f",&x1);
    printf("Enter the value of X2:");
    scanf("%f",&x2);
    printf("Enter the value of y1:");
    scanf("%f",&y1);
    printf("Enter the value of y2:");
    scanf("%f",&y2);
    d=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("The distance is %f",d);
    return 0;
}
