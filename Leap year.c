
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if((year%4)==0)
          {if(year%100==0)
              {if(year%1==00)
               printf("Leap year");
               else
               printf("Not leap Year");
               }
           else
           printf("Leap Year");
           }
    else
        printf("Not leap Year");
        return 0;
}
