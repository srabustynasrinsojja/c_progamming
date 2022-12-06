#include<stdio.h>
int main()
{
  int chocolate,rem,bs;

  scanf("%d", &chocolate);

  rem=chocolate-5;  //remaining of the chocolates after keeping 5 chocolate for his siblings
  bs=5+(rem/8);

  if (rem < 8)
  {
   printf("Nephews and nieces will get:0 each\n brothers and sisters will get: %d\n",chocolate);
  }

  else if(rem%8==0)
    {
        printf("Nephews and nieces will get:%d each\n brothers and sisters will get: %d",rem/8);
    }

   else
    {
        printf("Nephews and nieces will get:%d each\n brothers and sisters will get: %d\n",rem/8,bs);
    }


    return 0;
}
