#include<stdio.h>
void main()
{
  int n=5,row,count;
     for(row=1;row<=n;row++)
   {
       for(count=row;count<=n;count++)
       {
           printf("*");
       }
       printf("\n");
   }
}
