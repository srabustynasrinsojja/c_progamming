
#include <stdio.h>
int main()
{
    int n, firstDigit, lastDigit;
    printf("Enter number = ");
    scanf("%d", &n);

    lastDigit = n % 10;

    while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
    printf("first digit = %d \nlast digit = %d\n\n", firstDigit,lastDigit);
    return 0;
}
