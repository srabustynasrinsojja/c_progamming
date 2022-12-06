#include<stdio.h>
int main()
{
    int W,H;
    float BMI;
    printf("Weight(KG)=");
    scanf("%d",&W);
    printf("Height(inch)=");
    scanf("%d",&H);

    BMI=(float)W/(pow(.0255*H,2));
    if(BMI<18.5)
        printf("BMI=%d\nUnderweight",BMI);
    else if(BMI>=18.5 && BMI<25.00)
        printf("BMI=%d\nNormal",BMI);
    else if(BMI>=25.00 && BMI<30.00)
        printf("BMI=%d\nOverweight",BMI);
    else
    printf("BMI=%d\nObesity",BMI);
    return 0;
}
