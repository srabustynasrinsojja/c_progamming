#include<stdio.h>
int main()
{
 int i=1,marks,S=0,f=0,p=0;
 for(;i<=35;i++)
{
    printf("Enter your marks: ");
    scanf("%d",&marks);
    S=S+marks;

      if (marks>=0 && marks<40)
       {
          f=f+1;
        }
      if(marks==100)
       {
         p=p+1;
       }
}
 printf("Avarage marks is %d\n",(S/5));
 printf("Failed =%d\n",f);
 printf("perfect=%d",p);
return 0;
    }
