//Program to Swap two numbers using pointers(Without third variable)
#include<stdio.h>
void main()
{
    int a,b,*p,*q;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;

    *p=(*p)+(*q);
    *q=(*p)-(*q);
    *p=(*p)-(*q);
    printf("Values after Swapping are:%d,%d",*p,*q);
}
