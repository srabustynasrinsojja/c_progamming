#include<stdio.h>
float function(int x,int y)
{
   float z,k;

   if(x>y) {
    z=x*x-4*y;
   }

   else if(x<y) {
    z=x*x+4*y;
   }

   else if(x=y) {
        k=x+y;
    z=pow(k,3/4);
   }
   return z;
}
int main()
{
    int x,y;
    float z;
    printf("Enter 2 numbers:");
    scanf("%d %d",&x,&y);
    z=function(x,y);
    printf("%f",z);
    return 0;

}
