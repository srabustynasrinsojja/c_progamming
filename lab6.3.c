
#include<stdio.h>
int main()
{
    int A[10],*p1,even[10],*p2,*p3,odd[10],i,e=0,o=0;
      p1=&A[0];
      p2=&even[0];
      p3=&odd[0];
    for(i=0;i<10;i++){
        scanf("%d",(p1+i));
    }
     for(i=0;i<10;i++){
    if(*(p1+i)%2==0){
     *(p2+e)=*(p1+i);
      e++;
     }
        else {
      *(p3+o) =*(p1+i) ;
      o++;
     }
    }
    printf("Array of even numbers:");
    for(i=0;i<e;i++){
            printf("%d ",*(p2+i));
        }
        printf("\n");
         printf("Array of odd numbers:");
    for(i=0;i<o;i++){
            printf("%d ",*(p3+i));
        }
        return 0;
}
