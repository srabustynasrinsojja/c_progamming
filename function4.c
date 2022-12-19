#include<stdio.h>
int weight(int x,int y)
{
   float z;
   if(x>y) {
    z=x*x-4*y;
   }
   else if(x<y) {
    z=x*x+4*y;
   }
   else if(x=y) {
    z=pow((x+y),3/4);
   }
   return z;
}
int main()
{
    int x,y;
    float z;
    printf("Enter 2 numbers:");
    scanf("%d %d",&x,&y);
    z=weight(x,y);
    printf("%d",z);
    return 0;

}
