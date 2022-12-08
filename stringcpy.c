#include<stdio.h>
#define MAX_SIZE 100
int main()

{
   int i;
   char name1[MAX_SIZE];
   char name2[MAX_SIZE];
   printf("enter your name:");
   gets(name1);
   for(i=0;name1[i]!='\0';i++)
    {
   name2[i]=name2[i];
   }
   name2[i]='\0';
   printf("%s",name2);

    return 0;

}
