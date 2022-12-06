#include<stdio.h>
int main()
{
    int N;
    printf("Please,enter your number:");
    scanf("%d",&N);
    if(N%2==0)
        printf("The number you entered is EVEN");
    else
        printf("The number you entered is ODD");
        return 0;
}
