//Program to Swap two using pointers and functions
#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
  int a,b;
  printf("Enter first number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  swap(&a,&b);
  printf("Swapped Values are:\nFirst Number=%d Second Number=%d",a,b);
}


