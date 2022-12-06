#include <stdio.h>
int main()
{
    int corridor;
    printf("Corridor Lenght: ");
    scanf("%d", &corridor);
    int people = corridor / 3;
    printf("Total People in Queue: %d", people);
    return 0;
}
