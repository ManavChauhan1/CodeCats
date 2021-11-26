//Reversing Arrays using Pointers and Functions
#include<stdio.h>
void reverse(int *);
void main()
{
   int a[10],i;
   printf("Enter Elements:");
   for(i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
    }
   reverse(a);
}
void reverse(int *p)
{
    int i;
    for(i=9;i>=0;i--)
    {
        printf("\n%d",*(p+i));
    }
}
