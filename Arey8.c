#include<stdio.h>
int main()
{
    int tem[7],n,i,tem_max,day;

    for(i=0;i<7;i++)
    {
        printf("Enter the temperature of day %d:",i+1);
        scanf("%d",&tem[i]);
    }
    tem_max=tem[0];
   for(i=1;i<7;i++)
    {
       if(tem[i]>tem_max)
        {
            tem_max=tem[i];
             day=i+1;
        }

        }
    printf("%d %d",tem_max,day);
    return 0;
}
