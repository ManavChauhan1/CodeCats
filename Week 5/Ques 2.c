//Program to Find Sum using pointers and functions
#include<stdio.h>
int add(int *a,int *b)
{
    return *a+*b;
}
int main()
{
    int a,b,c;
    printf("Enter two nums:");
    scanf("%d%d",&a,&b);
    c=add(&a,&b);
    printf("Sum=%d",c);
}
