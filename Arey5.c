#include<stdio.h>
int main()
{
    int m[100],count=0,i,n;
    printf("Enter the number of the students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the marks of student %d:",i+1);
        scanf("%d",&m[i]);
         if(m[i]==30){
            count=count+1;
         }
         printf("%d",count);
    }
    return 0;
}
