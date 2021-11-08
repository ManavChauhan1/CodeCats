#include<stdio.h>
void main()
{
    int n,row,count;
    printf("Enter n:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(count=1;count<=row;count++)
        {
            printf("%d",count);
        }
        printf("\n");
    }
}
