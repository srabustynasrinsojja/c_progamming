
#include<stdio.h>
int main()
{
    float t1,t2,f,a,c1,c2,c3,c,m;
    int i,x;
    printf("Input the number of students:");
    scanf("%d",&x);

    for(i=1; i<=x; i++)
    {printf("Enter your Term 1 ,term 2,attendence,class test 1,class test2 and class test 3 numbers:");
        scanf("%f %f %f %f %f %f %f",&t1,&t2,&a,&c1,&c2,&c3);


        if(c1>=c2 && c2>=c3 || c1>=c3 && c2>=c3){
            c=(c1+c2)/2.0;
            }
        else if(c2>=c3 && c3>=c1 || c2>=c1 && c3>=c1){
            c=(c2+c3)/2.0;
          }
        else if(c1>=c2 && c3>=c2 || c1>=c3 && c3>=c2){
            c=(c1+c3)/2.0;
         }

       m=t1+t2+f+a+c;


        if(m>=90 && m<=100)

            printf("Grade is A");

        else if(m>=80 && m<=89)

            printf("Grade is B");

        else if(m>=70 && m<=79)

            printf("Grade is C");

        else if(m>=60 && m<=69)

            printf("Grade is D");

        else if(m>=0 && m<=59)

            printf("Grade is F");

        else

            printf("Invalid input");

        printf("\n\n");

    }

    return 0;
}
