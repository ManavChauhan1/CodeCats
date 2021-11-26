//Working of Pointers and Arrays
#include<stdio.h>
void main()
{
    int a[]={1,2,3,4,5};
    int *p,i;
    p=&a[0];
    {
        for(i=0;i<5;i++)
        {
            printf("\n%d,%d,%d,%d",i,a[i],*p,p);
            p++;
        }
    }
}
