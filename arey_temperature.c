int main()
{
    int tem[5],i,max=0,j;
    for(i=0;i<5;i++)
    {
        printf("\n Enter the Tempature = ");
        scanf("%d",&tem[i]);
    if(tem[i]> max)
        {
            max=tem[i];
            j=i+1;
        }
    }
    printf("\n The Day number %d  and Has Maximum Temperature %d",j,max);
    return 0;
}
