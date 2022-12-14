#include<stdio.h>
int main()
{
    int i=0,k=0,j=0;
    int x[10],*p,even[10],*e,odd[10],*o;
    p=&x[0];
    e=&even[0];
    o=&odd[0];
   for(i=0;i<10;i++){
     scanf("%d",p+i);
   }
   for(i=0;i<10;i++){
    if(*p+i%2==0){
    *(e+k)=*p+i;
      k++;}
     else
       *(o+j) =*p+i;
      j++;
   }
   for(i=0;i<k;i++){
    printf("%d",*e+i);
   }
   printf("\n");
   for(i=0;i<j;i++){
    printf("%d",*o+i);
   }
}
