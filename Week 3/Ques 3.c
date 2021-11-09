#include<stdio.h>
void main()
{
  int n=5,row,count;
     for(row=1;row<=n;row++)
       {
       for(count=1;count<=n-row;count++)
           printf(" ");
        for(count=1;count<=row;count++)
            printf("*");
        for(count=row-1;count>=1;count--)
            printf("*");
        printf("\n");
       }
}
