#include<stdio.h>
int main()
{
    int n,t1,t2,f,c1,c2,c3,a,i,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      {
        scanf("%d %d %d %d %d %d",&t1,&t2,&f,&a,&c1,&c2,&c3);
        if(c1<c2 && c1<c3){

             m=(t1*.2)+(t2*.2)+(f*.3)+((c2+c3)*.2)/2.0+(a*.1);
             }
           if(c2<c1 && c2<c3){

             m=(t1*.2)+(t2*.2)+(f*.3)+((c1+c3)*.2)/2.0+(a*.1);
            }
           if(c3<c2 && c3<c1){

             m=(t1*.2)+(t2*.2)+(f*.3)+((c2+c1)*.2)/2.0+(a*.1);
           }
      }

    if(m>=90 && m<=100)
         printf("Grade is A");
     else if(m>=80 && m<=89);
        printf("Grade is B");
     else if(m>=70 && m<=79);
          printf("Grade is C");
     else if(m>=60 && m<=69)
          printf("Grade is D");
      else if(m>=0 && m<=59);
          printf("Grade is F");
      else
         printf("Invalid input");

return 0;
}
