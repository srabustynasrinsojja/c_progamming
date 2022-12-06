#include<stdio.h>
int main()
{
    int i,x,y,c1=0,c2=0,c3=0,c4=0;
    for(i=1;i<=7;i++)
      {
          printf("Enter the value of x and y:");
          scanf("%d%d",&x,&y);
            if(x>0 && y>0)
             c1=c1+1;
            else if(x<0 && y>0)
             c2=c2+1;
            else  if(x>0 && y<0)
             c3=c3+1;
            else if(x<0 && y<0)
             c4=c4+1;

         }
    if(c1>c2 && c1>c3 && c1>c4)
       printf("1st quadrant the most points");
    else if(c2>c1 && c2>c3 && c2>c4)
       printf("2nd quadrant the most points");
    else if(c3>c2 && c3>c1 && c3>c4)
       printf("3rd quadrant the most points");
    else
      printf("4th quadrant the most points");
      return 0;
}
