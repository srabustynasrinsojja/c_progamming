#include<stdio.h>
int main()
{
int age,i,count=0;
for(i=1;i<=100;i++)
{
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=50 && age<=60)
     count=count+1;
}
printf("%d people are in the group of 50 to 60",count);
return 0;
    }
