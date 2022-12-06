
//Array sample program
//Maheen Islam

//Yesterday

//array1.c
//Text
//lass comments

#include<stdio.h>
#define size 4
int main()
{
    int m[size],i,sum=0;
    float average;
    printf("Input marks(0-25) of the students\n");
    for(i=0;i<size;i++)
    {
        printf("Student[%d]:",i+1);
        scanf("%d",&m[i]);
        sum+=m[i];
    }
    printf("Marks of the students\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",m[i]);
    }

    average=sum/size;
    printf("Average=%f",average);
    int max=m[0],maxStd=0;
    int min=m[0],minStd=0;
    for(i=1;i<size;i++)
    {
       if(m[i]>max)
        {
            max=m[i];
            maxStd=i;
        }

       if(m[i]<min)
       {
            min=m[i];
            minStd=i;
       }

    }
    printf("\nMaximum number obtained by Std[%d]=%d\nMinimum number obtained by Std[%d]=%d",maxStd+1,max,minStd+1,min);
    return 0;
}
