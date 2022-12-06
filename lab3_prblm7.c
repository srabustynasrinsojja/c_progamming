#include<stdio.h>
int main()
{
    int Ah,Am,As,Bh,Bm,Bs,A,B;
    printf("Please Enter Ah=");
    scanf("%d",&Ah);
    printf("Please Enter Am=");
    scanf("%d",&Am);
    printf("Please Enter As=");
    scanf("%d",&As);
    printf("Please Enter Bh=");
    scanf("%d",&Bh);
    printf("Please Enter Bm=");
    scanf("%d",&Bm);
    printf("Please Enter Bs=);
    scanf("%d",&Bs);
    A=Ah+Am*.016667+As*.00027778;
    B=Bh+Bm*.016667+Bs*.00027778;
    if(A>B)
       printf("A takes more times.");
       else
       printf("B takes more times.");

        return 0;
}
