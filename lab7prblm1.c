#include<stdio.h>
int prime_number(int n) {
     int i,k;

    for(i=2; i<=n/2; i++)
    {
        if(n%i == 0)
        {
            printf("not Prime\n");
            k=i;
            printf("Maximum factor is %d",k);
            break;
            //return 0;
        }
    }
    printf("Prime");

}



int main() {
int a;
printf("Enter any number :");
scanf("%d",&a);
prime_number(a);
//min_factor(a);

return 0;
}

