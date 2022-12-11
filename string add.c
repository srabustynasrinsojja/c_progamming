#include<stdio.h>
#define MAX_SIZE 100
int main()
{
    char st1[MAX_SIZE],st2[MAX_SIZE];
    int i,c;
    printf("Enter a sentence:");
    gets(st1);
    printf("Enter a sentence:");
    gets(st2);
    strcat(st1,st2);
    printf("%s\n",st1);
    printf("%s\n",st2);
    printf("%d",i);
    return 0;
}
