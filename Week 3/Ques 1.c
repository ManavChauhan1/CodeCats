#include<stdio.h>
void main()
{
    int n=5,row,count;
    for(row=1;row<=n;row++)
    {
        for(count=1;count<=row;count++)
        {
            printf("*");
        }
        printf("\n");
    }
}
