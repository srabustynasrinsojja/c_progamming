#include<stdio.h>
int main()
{
    int M;
    printf("Please Enter your number:");
    scanf("%d",&M);
    if(M>=90 && M<=100)
        printf("Grade is A");
       else if(M>=80 && M<90)
        printf("Grade is B");
        else if(M>=70 && M<=79)
        printf("Grade is C");
       else  if(M>=60 && M<=69)
        printf("Grade is D");
        else if(M<0)
        printf("Invalid Input");
    else
    printf("Grade is F");
    return 0;
}

