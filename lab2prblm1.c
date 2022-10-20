#include<stdio.h>
int main()
{
    int n;
    float B,C,salary=1500,computer_price,bonus=200, commission = .02;
    printf("Enter the number of Computer:");
    scanf("%d",&n);
    printf("Price of each computer=");
    scanf("%f",&computer_price);
    B=n*bonus;
    C=n*computer_price*commission;
    printf("Bonus=%f\n",B);
    printf("Commission=%f",C);
    return 0;

}
