#include<stdio.h>
int main()
{
    int M;
    printf("Enter the number:");
    scanf("%d",&M);
    if(M>=60)
        printf("Congratulations\n\nPassed");
    else
        printf("Sorry\n\nFailed");
    return 0;
}
