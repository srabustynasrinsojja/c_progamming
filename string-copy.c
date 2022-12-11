#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    char st1[MAX_SIZE],st2[MAX_SIZE];
    int i,c;
    printf("Enter a sentence:");
    gets(st1);
    for(i=0;st1[i]!='\0';i++)
    {
       st2[i]=st1[i];
    }
    st2[i]='\0';
    printf("%s\n",st1);
    printf("%s\n",st2);
    printf("%d",i);
    return 0;
}
