//Program to Find Factorial using Pointers and Functions
#include<stdio.h>
int fact(int *a)
{
    int fac=1;
    if(*a==0)
        printf("Factorial=1");
    else
    {
        while(*a>0)
    {
        fac*=(*a);
        (*a)--;
    }
    return fac;
    }
}
int main()
{
    int n,a;
    printf("Enter any positive number:");
    scanf("%d",&n);
    a=fact(&n);
    printf("Factorial is:%d",a);
}
