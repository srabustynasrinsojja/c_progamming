#include<stdio.h>
int main()
{
    float Y,M,K1,K2;
    printf("Enter the distance in mile and yards\n Miles:");
    scanf("%f",&M);
    printf("Yards:");
    scanf("%f",&Y);
    K1=M*1.609;
    K2=(Y/1760)*1.609;
    printf("The distance in kilometer is=%f",(K1+K2));
    return 0;


}
