#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    char s1[MAX_SIZE],s2[MAX_SIZE];
    int i,c1=0,c2=0;
    printf("Enter a sentence:");
    gets(s1);
    printf("Enter another sentence:");
    gets(s2);

    for(i=0;s1[i]!='\0';i++)
    {
      c1++;
    }
    for(i=0;s2[i]!='\0';i++)
    {
      c2++;
    }
    if(c1==c2)
        printf("Both strings are equal");
    else
    printf("Both strings are  not equal");
}
